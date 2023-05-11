import java.awt.*;
import java.awt.event.*;

public class Frm2 extends Frame implements ActionListener{
    Button bx;
    Frm2(String s)
    {
        super(s);
        
        bx=new Button("Exit");
        bx.addActionListener(this);

        setLayout(null);  //default layout manager cancellation
        bx.setBounds(100,140,100,20);  //column,rows,width,height

        add(bx);

        setSize(300,300);
        setResizable(false);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
        System.exit(0);
    }

    public static void main(String[] args)
    {
        Frm2 a=new Frm2("Window");
    }
}
