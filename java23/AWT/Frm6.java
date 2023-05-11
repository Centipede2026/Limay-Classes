import java.awt.*;
import java.awt.event.*;
import mypkg.Util;

public class Frm6 extends Frame implements WindowListener, ActionListener {
    Label lno,lnm,lmr;
    Panel p1,p2;
    TextField tno,tnm,tmr;
    Button bok,bcl;
    int rno;
    String nm;
    double mrk;
    
    Frm6() {
        super("Result");
        lno=new Label("No");
        lnm=new Label("Name");
        lmr=new Label("Marks");
        tno=new TextField("10");
        tnm=new TextField("20");
        tmr=new TextField("10");

        p1=new Panel();
        p1.setLayout(new GridLayout(3,2,5,5));
        p1.add(lno);
        p1.add(lnm);
        p1.add(lmr);
        p1.add(tno);
        p1.add(tnm);
        p1.add(tmr);
        add(p1,BorderLayout.CENTER);

        bok=new Button("OK");
        bcl=new Button("Clear");

        bok.addActionListener(this);
        bcl.addActionListener(this);

        p2=new Panel();
        p2.add(bok);
        p2.add(bcl);
        add(p2,BorderLayout.SOUTH);
        addWindowListener(this);
        
        setSize(400, 400);
        setVisible(true);
    }

    public void windowOpened(WindowEvent e) {
        System.out.println("Opened");
    }

    public void windowClosed(WindowEvent e) {
    }

    public void windowClosing(WindowEvent e) {
        System.exit(0);
    }

    public void windowActivated(WindowEvent e) {
        System.out.println("Activated");
    }

    public void windowDeactivated(WindowEvent e) {
        System.out.println("Deactivated");
    }

    public void windowIconified(WindowEvent e) {
        System.out.println("Iconified");
    }

    public void windowDeiconified(WindowEvent e) {
        System.out.println("Deiconified");
    }
    
    public void actionPerformed(ActionEvent e)
    {
        Button b=(Button)e.getSource();
        if(b==bok)
        {
            try {
                rno=Integer.parseInt(tno.getText());
                nm=tnm.getText();
                mrk=Double.parseDouble(tmr.getText());
            } catch (Exception e1) {
                // TODO: handle exception
            }

            String s="Roll no: "+rno+"\nName: "+nm+"\nMarks: "+mrk;
            Util.display(s);
        }
        tno.setText("");
        tnm.setText("");
        tmr.setText("");
        tno.requestFocus();
    }

    public void main(String[] args) {
        Frm6 a = new Frm6();
    }

}
