import javax.swing.*;
import java.util.*;
//       Array7
//      /    \
//     /      \
//   Stack    Queue

abstract class Array7 {
    int[] arr;

    Array7() {
        arr = new int[5];
    }

    void set(int pos, int d) {
        arr[pos] = d;
    }

    int get(int pos) {
        return arr[pos];
    }

    public String toString() {
        String s = "Data\n";
        return s;
    }

    abstract void menu();

    abstract void display();
}

interface IStack {
    void push(int d);

    void pop();

    boolean isFull();

    boolean isEmpty();
}

interface IQueue {
    void insert(int d);

    void remove();

    boolean isQFull();

    boolean isQEmpty();
}

class Stack3 extends Array7 implements IStack {
    int top;

    Stack3() {
        super();
        top = -1;
    }

    public boolean isFull() {
        return top == 4;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public void push(int d) {
        if (isFull())
            JOptionPane.showMessageDialog(null, "Overflow");
        else
            set(++top, d);
    }

    public void pop() {
        if (isEmpty())
            JOptionPane.showMessageDialog(null, "Underflow");
        else
            top--;
    }

    public String toString() {
        String s = "Stack";

        if (isEmpty())
            s = s + "Empty";
        else {
            for (int i = top; i >= 0; i--)
                s += " " + get(i);
        }
        return s;
    }

    public void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    public void menu() {
        String[] option = new String[] { "push", "pop", "display", "back" };
        int opt = 0, d = 0;
        while (true) {
            opt = JOptionPane.showOptionDialog(null, "Choose Option", "Stack", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, option, 0);
            if (opt == 3)
                break;

            switch (opt) {
                case 0:
                    try {
                        d = Integer.parseInt(JOptionPane.showInputDialog(null, "Date"));
                    } catch (Exception e) {
                    }
                    push(d);
                    break;
                case 1:
                    pop();
                    break;
                case 2:
                    display();
            }
        }
    }
}


class Queue extends Array7 implements IQueue 
{
    int fr = 0, rr = -1;
    Queue() {
        super();
        fr = 0;
        rr = -1;
    }

    public boolean isQFull() {
        return rr == 4;
    }

    public boolean isQEmpty() {
        return fr == -1;
    }

    public void insert(int d) {
        if (isQFull())
            JOptionPane.showMessageDialog(null, "overflow");
        else
            set(++rr, d);

    }

    public void remove() {
        if (isQEmpty())
            JOptionPane.showMessageDialog(null, "underflow");
        else
            fr++;
    }

    public String toString() {
        String s = "Queue";
        if (isQEmpty())
            JOptionPane.showMessageDialog(null, "Empty");
        else {
            for (int i = fr; i < rr; i++)
                s = s + " " + get(i);
        }
        return s;
    }

    public void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    public void menu() {
        String[] s = new String[] { "Insert", "Remove", "Display", "Exit" };
        int opt = 0, d = 0;
        while (true) {
            opt = JOptionPane.showOptionDialog(null, "Choose Option", "Queue", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, s, 0);

            if (opt == 3)
                break;
            switch (opt) {
                case 0:
                    try {
                        d = Integer.parseInt(JOptionPane.showInputDialog(null, "Data:"));
                    } catch (Exception e) {
                    }
                    insert(d);
                    break;

                case 1:
                    remove();
                    break;

                case 2:
                    display();
                    break;
            }
        }

    }
}

public class Hinheritance {
    public static void main(String[] args)
    {
        Array7 ref=null;
        int opt=JOptionPane.showOptionDialog(null,"Choose Option","Data Structures",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,new String[]{"Stack","Queue","Exit"},0);

        if(opt==2)
            return;
        if(opt==0)
            ref = new Stack3();
        else
            ref = new Queue();

        ref.menu();
    }
}
