import java.awt.*;
import java.awt.event.*;

public class Mouse3 extends Frame implements MouseListener{
    int x,y;
    String str;

    Mouse3(){
        super("Mouse");
        str=new String();

        addMouseListener(this);
        addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        setSize(400,400);
        setResizable(false);
        setVisible(true);
    }
    
    public void paint(Graphics g)
    {
        g.drawString(str,x,y);
    }

    public void mouseEntered(MouseEvent e)
    {
        x=180;y=160;
        str="ENTERED";
        repaint();
    }
    
    public void mouseExited(MouseEvent e)
    {
        x=190;y=180;
        str="EXITED";
        repaint();
    }
    
    public void mousePressed(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Pressed";
        repaint();
    }
    
    public void mouseReleased(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Released";
        repaint();
    }
    
    public void mouseClicked(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Clicked";
    }
    public static void main(String args[])
    {
        Mouse3 a=new Mouse3();
    }
}
