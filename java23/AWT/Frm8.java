import java.awt.*;
import java.awt.event.*;
import mypkg.Util;

public class Frm8 extends Frame implements WindowListener, FocusListener, ActionListener {
    Label lmo, lmr;
    TextField tno, tmr;
    Button bok, bcl;
    int rno;
    double mrk;

    Frm8() {
        super("WindowListener");
        lmo = new Label("Roll No");
        lmr = new Label("Marks");

        tno = new TextField("10");
        tmr = new TextField("10");

        tno.addFocusListener(this);
        tmr.addFocusListener(this);

        bok = new Button("OK");
        bcl = new Button("CLEAR");
        bok.addActionListener(this);
        bcl.addActionListener(this);

        setLayout(new GridLayout(3, 2, 5, 5));

        add(lmo);
        add(tno);
        add(lmr);
        add(tmr);
        add(bok);
        add(bcl);

        addWindowListener(this);
        setSize(400, 400);
        setVisible(true);
    }

    public void focusLost(FocusEvent e){
        TextField t=(TextField)e.getSource();

        if(t==tno)
        {
            try {
                rno=Integer.parseInt(tno.getText());
            } catch (Exception e1) {
                // TODO: handle exception
                tno.requestFocus();
                return;
            }

            if(rno<=0)
            {
                tno.requestFocus();
                return;
            }
        }

        if(t==tmr)
        {
            try {
                mrk=Double.parseDouble(tmr.getText());
            } catch (Exception e1) {
                // TODO: handle exception
                tmr.requestFocus();
                return;
            }

            if(mrk<=0.0 || mrk>10.0)
            {
                tmr.requestFocus();
                return;
            }
        }
        bok.setEnabled(true);
    }

    public void focusGained(FocusEvent e) {
        TextField t = (TextField) e.getSource();

        if (t == tno) {
            bok.setEnabled(false);
        }
    }

    public void actionPerformed(ActionEvent e) {
        Button b=(Button)e.getSource();
        if(b==bok)
        {
            if(mrk<=0.0||mrk>=10.0)
            {
                tno.requestFocus();
                return;
            }
            String s="Roll No"+rno+"\nMarks"+mrk;
            Util.display(s);
        }

        tno.setText("");
        tmr.setText("");

        tno.requestFocus();
        // tmr.requestFocus();
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

    public static void main(String[] args) {
        Frm8 a = new Frm8();
    }
}
