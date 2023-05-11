import java.awt.*;
import java.awt.event.*;

public class Mouse4 extends Frame implements MouseListener{
    int x,y;

    Mouse4(){
        super("Mouse");

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
        g.drawRect(175,175,50,50);
        g.drawOval(50, 50, 50, 50);
        g.drawOval(300, 50, 50, 50);
        g.drawPolygon(null, null, 6);
    }

    public void mouseEntered(MouseEvent e)
    {
    }
    
    public void mouseExited(MouseEvent e)
    {
    }
    
    public void mousePressed(MouseEvent e)
    {
    }
    
    public void mouseReleased(MouseEvent e)
    {
    }
    
    public void mouseClicked(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
    }
    public static void main(String args[])
    {
        Mouse4 a=new Mouse4();
    }
}
