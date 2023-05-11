import java.util.*;
import javax.swing.*;

public class Student7 implements Comparable<Student7>, Comparator<Student7> {
    int rno;
    String nm;
    int mrk;

    Student7() {
        rno = mrk = 0;
        nm = new String();
    }

    Student7(int a, String b, int c) {
        rno = a;
        mrk = c;
        nm = b;
    }

    public String toString() {
        String a = "Roll No.: " + rno + "Name: " + nm + "Marks: " + mrk;
        return a;
    }

    void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    public int compareTo(Student7 a) {
        return rno - a.rno;
    }

    public int compare(Student7 a,Student7 b)
    {
        return (a.nm).compareTo(b.nm);
    }

    public static void main(String[] args) {
        LinkedList<Student7> obj = new LinkedList<Student7>();
        obj.add(new Student7(13, "Ajay", 87));
        obj.add(new Student7(6, "Amita", 92));
        obj.add(new Student7(18, "Vijay", 59));
        obj.add(new Student7(26, "Sujata", 72));
        obj.add(new Student7(12, "Suhas", 72));

        JOptionPane.showMessageDialog(null, obj.toString());

        int n = obj.size();
        Student7[] arr = new Student7[n];

        obj.toArray(arr); // copies list data to array
        //JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        Arrays.sort(arr);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));

        obj.toArray(arr);  //copies list data to array
        Arrays.sort(arr,new Student7());
        JOptionPane.showMessageDialog(null,Arrays.toString(arr));
    }
}
