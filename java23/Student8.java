import java.util.*;
import javax.swing.*;

public class Student8 implements Comparable<Student8>, Comparator<Student8> {
    int no;
    String nm;
    String tnm;
    String cnm;

    Student8() {
        no = 0;
        nm = "";
        tnm = "";
        cnm = "";
    }

    public String toString() {
        String s = "Roll no: " + no + "\nName: " + nm + "\nTrade: " + tnm + "\nCity: " + cnm;
        return s;
    }

    void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    void setData(int a) {
        no = a;
        String[] trade = new String[] { "CSE", "IT", "TRON", "TRIC", "CIVIL", "MECH" };
        String[] city = new String[] { "Kolhapur", "Belgav", "Dharwad", "Barshi", "Beed", "Nagpur" };

        try {
            nm = JOptionPane.showInputDialog(null, "Name:");
            tnm = trade[JOptionPane.showOptionDialog(null, "Choose Trade", "Trade", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, trade, 0)];

            cnm = city[JOptionPane.showOptionDialog(null, "Choose City", "City", JOptionPane.YES_OPTION,
                    JOptionPane.INFORMATION_MESSAGE, null, city, 0)];
        } catch (Exception e) {
        }
    }

    public int compare(Student8 a, Student8 b) {
        return (a.nm).compareTo(b.nm);
    }

    public int compareTo(Student8 a) {
        return no - a.no;
    }

    public static Comparator<Student8> Trade = new Comparator<Student8>() {
        @Override
        public int compare(Student8 a, Student8 b) {
            return (a.tnm).compareTo(b.tnm);
        }
    };

    public static Comparator<Student8> orderTradeNo = new Comparator<Student8>() {
        @Override
        public int compare(Student8 a, Student8 b) {
            int res = (a.tnm).compareTo(b.tnm);
            if (res == 0)
                return a.no - b.no;
            return res;
        }
    };

    public static Comparator<Student8> orderCity = new Comparator<Student8>() {
        @Override
        public int compare(Student8 a, Student8 b) {
            int res = (a.cnm).compareTo(b.cnm);
            if (res == 0)
                return (a.tnm).compareTo(b.tnm);
            return res;
        }
    };

    public static void main(String[] args) {
        LinkedList<Student8> obj = new LinkedList<Student8>();
        int no = 0;
        while (true) {
            try {
                no = Integer.parseInt(JOptionPane.showInputDialog(null, "Roll no: "));
            } catch (Exception e) {
                continue;
            }
            if (no == 0)
                break;
            Student8 a = new Student8();
            a.setData(no);
            obj.add(a);
        }
    }
}
