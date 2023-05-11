import java.awt.*;
import java.awt.event.*;

public class Mouse5 extends Frame implements MouseListener {
    int x, y;

    Mouse5() {
        super("Mouse");

        addMouseListener(this);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        setSize(400, 400);
        setResizable(false);
        setVisible(true);
    }

    public void draw(){
        int a=(int)(Math.random()*255);
        int b=(int)(Math.random()*255);
        int c=(int)(Math.random()*255);
        Color cr=new Color(a,b,c);
        Graphics g=getGraphics();
        g.setColor(cr);
        g.fillRect(x,y,20,20);  //g.drawRect
    }

    public void mouseEntered(MouseEvent e) {
    }

    public void mouseExited(MouseEvent e) {
    }

    public void mousePressed(MouseEvent e) {
    }

    public void mouseReleased(MouseEvent e) {
    }

    public void mouseClicked(MouseEvent e) {
        x = e.getX();
        y = e.getY();
    }

    public static void main(String args[]) {
        Mouse5 a = new Mouse5();
    }
}
