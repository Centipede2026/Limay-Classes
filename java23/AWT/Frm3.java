import java.awt.*;
import java.awt.event.*;

public class Frm3 extends Frame implements ActionListener{
    Button bx,bc;
    Frm3(String s)
    {
        super(s);
        
        bx=new Button("Exit");
        bc=new Button("Colour");
        bx.addActionListener(this);
        bc.addActionListener(this);

        setLayout(null);  //default layout manager cancellation
        bx.setBounds(50,140,75,20);  //column,rows,width,height
        bc.setBounds(175,140,75,20);

        add(bx);
        add(bc);
        
        setSize(300,300);
        setResizable(false);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
        Button b=(Button)e.getSource();
        if(b==bx)
            System.exit(0);
        else{
            int red=(int)(Math.random()*255);
            int green=(int)(Math.random()*255);
            int blue=(int)(Math.random()*255);
            Color cr=new Color(red,green,blue);
            setBackground(cr);   
        }
    }

    public static void main(String[] args)
    {
        Frm3 a=new Frm3("Window");
    }
}
