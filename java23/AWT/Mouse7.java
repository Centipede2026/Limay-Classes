import java.util.*;
import java.awt.*;
import java.awt.event.*;

class MyObject {
    int x, y, w, h, shp;
    Color cr;

    MyObject(int x, int y, int w, int h, int shp, Color cr) {
        this.x = x;
        this.y = y;
        this.w = w;
        this.h = h;
        this.shp = shp;
        this.cr = cr;

    }

    public void draw(Graphics g) {
        g.setColor(cr);
        switch (shp) {
            case 1:
                g.drawRect(x, y, w, h);
                break;
            case 2:
                g.fillRect(x, y, w, h);
                break;
            case 3:
                g.drawOval(x, y, w, h);
                break;
            case 4:
                g.fillOval(x, y, w, h);
        }
    }
}

public class Mouse7 extends Frame implements MouseListener {
    int x, y, w, h,flg, shp;
    MyObject obj;
    LinkedList<MyObject> ls;

    Mouse7() {
        super("Mouse");
        ls =new LinkedList<MyObject>();

        flg=0;
        // shp=1;
        shp=2;

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

    public void paint(Graphics g)
    {
        int i=0,n=ls.size();
        while(i<n)
        {
            obj=(MyObject)ls.get(i);
            obj.draw(g);
            i++;
        }
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
        if (flg == 0) {
            flg = 1;
            x = e.getX();
            y = e.getY();
        } else {
            w = e.getX() - x;
            h = e.getY() - y;

            int a = (int) (Math.random() * 255);
            int b = (int) (Math.random() * 255);
            int c = (int) (Math.random() * 255);

            Color cr = new Color(a, b, c);
            obj = new MyObject(x, y, w, h, shp, cr);
            ls.add(obj);
            repaint();

            flg = 0;
        }
    }

    public static void main(String args[]) {
        Mouse7 a = new Mouse7();
    }
}
