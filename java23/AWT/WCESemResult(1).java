import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;
import mypkg.Util;
//WCESemResult,Result4,RAMDialog,RODisplay

class Result4 implements Serializable {
    int no;
    double mrk;

    Result4() {
        no = 0;
        mrk = 0.0;
    }

    Result4(int a, double b) {
        no = a;
        mrk = b;
    }

    public String toString() {
        String s = "\nRoll No: " + no + "\nMarks: " + mrk;
        return s;
    }

    void display() {
        Util.display(toString());
    }
}

class RAMDDialog extends Dialog implements ActionListener, FocusListener // result add modify delete dialog
{
    Result4 robj;
    LinkedList<Result4> obj;
    int no;
    double mrk;
    String action;
    Label l1, l2;
    TextField t1, t2;
    Button b1, b2;
    boolean res;

    RAMDDialog(Frame frm, String title, boolean state, LinkedList<Result4> ls) {
        super(frm, title, state);
        obj = ls;
        action = title; // add,mod,del
        l1 = new Label("No");
        l2 = new Label("Marks");

        t1 = new TextField(10);
        t2 = new TextField(10);

        t1.addFocusListener(this);
        t2.addFocusListener(this);
        b1 = new Button("Update");
        b2 = new Button("Back");
        b1.addActionListener(this);
        b2.addActionListener(this);

        setLayout(new GridLayout(3, 2, 4, 4));
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(b1);
        add(b2);

        setSize(400, 300);
        setResizable(false);
        setVisible(true);
    }

    public void FocusGained(FocusEvent e) {
        TextField t = (TextField) e.getSource();
        if (t == t1) {
            b1.setEnabled(false);
        }
    }

    public void FocusLost(FocusEvent e) {
        TextField t = (TextField) e.getSource();
        if (t == t1) {
            try {
                no = Integer.parseInt(t1.getText());
            } catch (Exception e1) {
            }
            res = search(no);
            if (res == true) {
                if (action.equals("ADD")) {
                    t1.requestFocus();
                    return;
                }
                t2.setText("" + robj.mrk);
                if (action.equals("DEL")) {
                    t2.setEditable(false);
                    b1.setEnabled(true);
                }
            } else {
                if (action.equals("ADD"))
                    ;
                else {
                    t1.requestFocus();
                    return;
                }
            }
        }

        if (t == t2) {
            try {
                mrk = Double.parseDouble(t2.getText());
            } catch (Exception e1) {
                t2.requestFocus();
                return;
            }

            if (mrk < 0.0 || mrk > 10.0) {
                t2.requestFocus();
                return;
            }
            b1.setEnabled(true);
        }
    }

    public void actionPerformed(ActionEvent e) {
        Button b = (Button) e.getSource();
        if (b == b1) {
            if (action.equals("ADD")) {
                robj = new Result4(no, mrk);
                obj.add(robj);
            }
            if (action.equals("MOD")) {
                robj.no = no;
                robj.mrk = mrk;
            }
            if (action.equals("DEL")) {
                obj.remove(robj);
            }
        }
        setVisible(false);
    }

    boolean search(int no) {
        int i = 0, n = obj.size();
        while (i < n) {
            robj = (Result4) obj.get(i);
            if (robj.no == no)
                break;
            i++;
        }
        if (i == n) {
            robj = null;
            return false;
        } else
            return true;
    }
}

class RDDisplay extends Dialog implements ActionListener{
    int index,n,no;
    double mrk;
    LinkedList<Result4> obj;
    Result4 robj;
    Label l1,l2;
    TextField t1,t2;
    Panel p1,p2;
    Button bf,bl,bp,bn; //first,last,prev,next
    
    RDDisplay(Frame prnt,String title,Boolean state, LinkedList<Result4> ls)
    {
        super(prnt,title,state);
        obj=ls;
        
        l1=new Label("No");
        l2=new Label("Marks");
        t1=new TextField("10");
        t2=new TextField("10");
        t1.setEditable(false);
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

        p2=new Panel();
        p2.add(bf);
        p2.add(bp);
        p2.add(bn);
        p2.add(bl);

        add(p1,BorderLayout.CENTER);
        add(p1,BorderLayout.SOUTH);

        setSize(200,300);
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
    }
}   

public class WCESemResult {

}