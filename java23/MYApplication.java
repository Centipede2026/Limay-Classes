import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;  // for file handling
import mypkg.Util;

class Result4 implements Serializable
{
	int no;
	double mrk;
	Result4()
	{
		no=0;
		mrk=0.0;
	}
	Result4(int a,double b)
	{
		no=a;
		mrk=b;
	}
	public String toString()
	{
		String s="\nRoll No:"+no+"\nMarks:"+mrk;
		return s;
	}
	void display()
	{
		Util.display(toString());
	}
}

class RAMDDialog extends Dialog implements ActionListener,FocusListener
{
	Result4 robj;
	LinkedList<Result4> obj;
	
	int no;
	double mrk;
	
	String action;
	
	Label l1,l2;
	TextField t1,t2;
	Button b1,b2;
	
	boolean res;
	
	RAMDDialog(Frame frm,String title,boolean state,LinkedList<Result4> ls)
	{
		super(frm,title,state);
		
		obj=ls;
		action=title; //ADD,MOD,DEL
		
		l1=new Label("No");
		l2=new Label("Marks");
		
		t1=new TextField(10);
		t2=new TextField(10);
		t1.addFocusListener(this);
		t2.addFocusListener(this);
		
		b1=new Button("UPDATE");
		b2=new Button("BACK");
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		setLayout(new GridLayout(3,2,5,5));
		
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(b2);
		
		setSize(400,300);
		setResizable(false);
		setVisible(true);
	}
	
	public void focusGained(FocusEvent e)
	{
		TextField t=(TextField)e.getSource();
		if(t==t1)
		{
			b1.setEnabled(false);
		}
	}
	
	public void focusLost(FocusEvent e)
	{
		TextField t=(TextField)e.getSource();
		if(t==t1)
		{
			try
			{
				no=Integer.parseInt(t1.getText());
			}
			catch(Exception e1)
			{
				t1.setText("0");
				t1.requestFocus();
				return;
			}
			res=search(no);
			if(res==true)
			{
				if(action.equals("ADD"))
				{	
					t1.setText("0");
					t1.requestFocus();
				}
				t2.setText(""+robj.mrk);
				if(action.equals("DEL"))
				{
					t2.setEditable(false);
					b1.setEnabled(true);
				}
			}
			else
			{
				if(action.equals("ADD"))
					;
				else
				{
					t1.requestFocus();
					
				}
			}
		}
		if(t==t2)
		{
			try
			{
				mrk=Double.parseDouble(t2.getText());
			}
			catch(Exception e2)
			{
				t2.requestFocus();
				return;
			}
			if(mrk<0.0 || mrk>10.0)
			{
				t2.requestFocus();
				return;
			}
			b1.setEnabled(true);
		}
	}
	
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();

		if(b==b1)
		{
			if(action.equals("ADD"))
			{
				robj=new Result4(no,mrk);
				obj.add(robj);
			}
			search(no);
			if(action.equals("MOD"))
			{
				robj.no=no;
				robj.mrk=mrk;
			}
			if(action.equals("DEL"))
				obj.remove(robj);
		}
		setVisible(false);
	}
	
	boolean search(int no)
	{
		int i=0,n=obj.size();
		while(i<n)
		{
			robj=(Result4)obj.get(i);
			if(robj.no==no)
				break;
			i++;
		}
		if(i==n)
		{
			robj=null;
			return false;
		}
		else
			return true;
	}
}

class RDDisplay extends Dialog implements ActionListener
{
	int index,n;
	int no;
	double mrk;
	
	LinkedList<Result4> obj;
	Result4 robj;
	
	Label l1,l2;
	TextField t1,t2;
	
	Panel p1,p2;
	
	Button bf; //first
	Button bl; //last record
	Button bp; //Previous record
	Button bn; //net record
	
	RDDisplay(Frame prnt,String title,boolean state,LinkedList<Result4> ls)
	{
		super(prnt,title,state);
		
		obj=ls;
		
		l1=new Label("No:");
		l2=new Label("Marks:");
		
		t1=new TextField(10);
		t1.setEditable(false);
		t2=new TextField(10);
		t2.setEditable(false);
		
		p1=new Panel();
		p1.setLayout(new GridLayout(2,2,5,5));
		p1.add(l1);
		p1.add(t1);
		p1.add(l2);
		p1.add(t2);
		
		bf=new Button("|<");
		bp=new Button("<<");
		bn=new Button(">>");
		bl=new Button(">|");
		
		bf.addActionListener(this);
		bp.addActionListener(this);
		bn.addActionListener(this);
		bl.addActionListener(this);
		
		p2=new Panel();  //Default layout is Flow Layout
		p2.add(bf);
		p2.add(bp);
		p2.add(bn);
		p2.add(bl);
		
		add(p1,BorderLayout.CENTER);
		add(p2,BorderLayout.SOUTH);
		
		setSize(300,200);
		setResizable(false);
		
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				setVisible(false);
			}
			
		});
		
		robj=null;
		n=obj.size();
		index=0;
		
		if(n>0)
		{
			robj=(Result4)obj.get(index);
			no=robj.no;
			mrk=robj.mrk;
			t1.setText(""+no);
			t2.setText(""+mrk);
		}
		setVisible(true);
	}
	
	/*public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		int i=obj.indexOf(robj);
		if(i==n-1)
			bn.setEnabled(false);
		if(i==0)
			bp.setEnabled(false);
		robj=null;
		int n=obj.size();
		
		if(b==bf)
			index=0;
		
		if(b==bl)
			index=n-1;
		
		if(b==bp)
		{
			if(index>0)
				index--;
		}
		if(b==bn)
		{
			if(index<n-1)
				index++;
		}
		robj=(Result4)obj.get(index);
		no=robj.no;
		mrk=robj.mrk;
		t1.setText(""+no);
		t2.setText(""+mrk);
	}
	*/
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==bf)
			index=0;
		if(b==bl)
			index=n-1;
		if(b==bp)
		{
			if(--index<0)
				index=0;
		}
		if(b==bn)
		{
			if(++index>=n)
				index=n-1;
		}
		robj=(Result4)obj.get(index);
		no=robj.no;
		mrk=robj.mrk;
		t1.setText(""+no);
		t2.setText(""+mrk);
		
	}
}

public class WCESemResult extends Frame implements ActionListener
{ 
	Button ba,bm,bd,bdisp;
	
	LinkedList<Result4> obj;
	
	RDDisplay oDisplay;
	RAMDDialog aDialog;
	
	WCESemResult parent;
	
	WCESemResult()
	{
		super("Result");
		
		parent=this;
		
		obj=new LinkedList<Result4>();
		
		ba=new Button("ADD");
		bm=new Button("MOD");
		bd=new Button("DEL");
		bdisp=new Button("DISPLAY");
		
		ba.addActionListener(this);
		bm.addActionListener(this);
		bd.addActionListener(this);
		bdisp.addActionListener(this);
		
		Panel p=new Panel();
		p.setLayout(new GridLayout(2,2,5,5));
		
		p.add(ba);
		p.add(bm);
		p.add(bd);
		p.add(bdisp);
		
		add(p,BorderLayout.CENTER);
		
		setSize(300,300);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				close();
				System.exit(0);
			}
			
			public void windowOpened(WindowEvent e)
			{
				open();
			}
		});
		setVisible(true);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==ba)
			aDialog=new RAMDDialog(parent,"ADD",true,obj);
		if(b==bm)
			aDialog=new RAMDDialog(parent,"MOD",true,obj);
		if(b==bd)
			aDialog=new RAMDDialog(parent,"DEL",true,obj);
		if(b==bdisp)
			oDisplay=new RDDisplay(parent,"DISPLAY",false,obj);
	}
	
	void open()
	{
		FileInputStream fis=null;
		ObjectInputStream ois=null;
		try
		{
			fis=new FileInputStream("SemResult.dat");
			ois=new ObjectInputStream(fis);
			obj=(LinkedList<Result4>)ois.readObject();
			fis.close();
			ois.close();
		}
		catch(Exception e)
		{
			obj=new LinkedList<Result4>();
		}
	}
	
	void close()
	{
		FileOutputStream fos=null;
		ObjectOutputStream oos=null;
		try
		{
			fos=new FileOutputStream("SemResult.dat");
			oos=new ObjectOutputStream(fos);
			oos.writeObject(obj);
			fos.close();
			oos.close();
		}
		catch(Exception e){}
	}
}


public class Menu1 extends Frame implements ActionListener{
    MenuBar mb;
    Menu mf,me,mx;
    MenuItem mfn,mfo,mfs;
    MenuItem mec,meo,mep;
    MenuItem mxn,mxy;

    public Menu1()
    {
        super("Menu");

        mfn=new MenuItem("New");
        mfo=new MenuItem("Open");
        mfs=new MenuItem("Save");

        mfn.addActionListener(this);
        mfo.addActionListener(this);
        mfs.addActionListener(this);

        mf = new Menu("File");

        mf.add(mfn);
        mf.add(mfo);
        mf.add(mfs);

        mec=new MenuItem("Cut");
        meo=new MenuItem("Copy");
        mep=new MenuItem("Paste");

        mec.addActionListener(this);
        meo.addActionListener(this);
        mep.addActionListener(this);

        me=new Menu("Edit");

        me.add(mec);
        me.add(meo);
        me.add(mep);

        mxn=new MenuItem("No");
        mxy=new MenuItem("Yes");

        mxn.addActionListener(this);
        mxy.addActionListener(this);

        mx=new Menu("Exit");

        mx.add(mxn);
        mx.add(mxy);

        mb=new MenuBar();

        mb.add(mf);
        mb.add(me);
        mb.add(mx);

        setMenuBar(mb);

        setSize(400,400);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
        MenuItem a=(MenuItem)e.getSource();
        if(a==mxy)
            System.exit(0);
        else
            System.out.println(a.getLabel());
    }

    public static void main(String[] args)
    {
        Menu1 a=new Menu1();
		WCESemResult b=new WCESemResult();
    }
}