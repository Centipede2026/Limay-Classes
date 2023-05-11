import javax.swing.*;

class Stack1 {
    static int top;
    static int arr[];

    static {
        arr = new int[5];
        top = -1;
    }

    static boolean isFull() {
        return top == arr.length - 1;
    }

    static boolean isEmpty() {
        return top == -1;
    }

    static void push()
    {
        int d=0;

        if (isFull()){
            JOptionPane.showMessageDialog(null,"Overflow");
            return;
        }

        try {
            d=Integer.parseInt(JOptionPane.showInputDialog(null,"Input Data"));
        } 
        catch (Exception e) {}
        
        arr[++top]=d;
    }

    static void pop()
    {
        if(isEmpty()){
            JOptionPane.showMessageDialog(null,"Underflow");
            return;
        }
        top--;
    }

    static void display()
    {
        String str="";
        if (isEmpty()){
            str=str+"IsEmpty";
        }
        else    
        {
            for(int i=top;i>=0;i--)
            {
                str+=" "+arr[i];
            }
        }
        JOptionPane.showMessageDialog(null,str);
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

