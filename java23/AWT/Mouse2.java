import java.awt.*;
import java.awt.event.*;

public class Mouse2 extends Frame implements MouseListener{
    int x,y;
    String str;

    Mouse2(){
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
    
    void draw()
    {
        Graphics g=getGraphics();

        g.drawString(str,x,y);
    }

    public void mouseEntered(MouseEvent e)
    {
        x=50;y=50;
        str="Entered";
        draw();
    }
    
    public void mouseExited(MouseEvent e)
    {
        x=350;y=350;
        str="Exited";
        draw();
    }
    
    public void mousePressed(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Pressed";
        draw();
    }
    
    public void mouseReleased(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Released";
        draw();
    }
    
    public void mouseClicked(MouseEvent e)
    {
        x=e.getX();
        y=e.getY();
        str="Clicked";
    }
    public static void main(String args[])
    {
        Mouse2 a=new Mouse2();
    }
}
