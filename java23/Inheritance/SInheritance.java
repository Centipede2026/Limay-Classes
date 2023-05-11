import javax.swing.*;

class Number1 {
    int no;

    Number1() {
        no = 0;
    }

    Number1(int a) {
        no = a;
    }

    void setData(int a) {
        no = a;
    }

    void setData() {
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "No"));
        } catch (Exception e) {
        }
    }

    public String toString() {
        String s = "\n No: " + no;
        return s;
    }

    void display() {
        JOptionPane.showMessageDialog(null, toString());
    }
}

class Number2 extends Number1 {
    String nm;

    Number2() {
        super();
        nm = "";
    }

    Number2(int a, String b) {
        super(a);
        nm = b;
    }

    public String toString() {
        String s = super.toString() + "\nName" + nm;
        return s;
    }

    void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    void setData() {
        super.setData();
        nm = JOptionPane.showInputDialog(null, "Name");
    }

    void setData(int a, String b) {
        super.setData();
        nm = b;
    }

    void setData(int a) {
        super.setData(a);
        nm = JOptionPane.showInputDialog(null, "Name");
    }
}

class SInheritance {
    public static void main(String[] args) {
        Number1 a = new Number1(101);
        a.display();

        Number2 b = new Number2();
        b.setData();
        b.display();
        a = b;
        a.display();   //here number2 method is geting called because 'a' is holding reference of number2 i.e. b ,that's why b is getting called.
    }
}
