import java.util.*;
import javax.swing.*;

class Stack2 {
    static Stack<Integer> obj;

    static {
        obj = new Stack<Integer>();
    }

    static void push() {
        int d = 0;
        try {
            d=Integer.parseInt(JOptionPane.showInputDialog(null,"Input Data"));
            obj.push(d);
            // d=Integer.parseInt(JOptionPane.showInputDialog(null,"Input Data"));
        } catch (Exception e) {
        }
    }

    static void pop() {
        if (obj.empty()) {
            JOptionPane.showMessageDialog(null, "Underflow");
        }
        JOptionPane.showMessageDialog(null, "Popped Element " + obj.pop());
    }

    static void display() {
        String str = "Stack";
        if (obj.empty()) {
            JOptionPane.showMessageDialog(null, "Stack Empty");
        } else
            JOptionPane.showMessageDialog(null, "Stack:\n" + obj);
    }

    static void menu() {
        String[] choice = new String[] { "Push", "Pop", "Display", "Exit" };

        int opt = 0;
        while (true) {
            opt = JOptionPane.showOptionDialog(null, "Choose Option", "Matrix", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, choice, 0);

            if (opt == 8)
                break;
            switch (opt) {
                case 0:
                    push();
                    break;
                case 1:
                    pop();
                    break;
                case 2:
                    display();
                    break;
            }
        }
    }

    public static void main(String[] args) {

        menu();
    }
}
