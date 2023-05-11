import java.util.*;
import javax.swing.*;

public class Student6 implements Comparable <Student6>{
    int rno;
    String nm;
    int mrk;
    Student6()
    {
        rno=mrk=0;
        nm=new String();
    }

    Student6(int a,String b,int c)
    {
        rno=a;
        mrk=c;
        nm=b;
    }

    public String toString()
    {
        String a="Roll No.: "+rno+"Name: "+nm+"Marks: "+mrk;
        return a;
    }

    void display(){
        JOptionPane.showMessageDialog(null,toString());
    }

    public int compareTo(Student6 a)
    {
        return rno-a.rno;
    }

    public static void main(String[]args)
    {
        LinkedList<Student6>obj=new LinkedList<Student6>();
        obj.add(new Student6(13,"Ajay",87));
        obj.add(new Student6(6,"Amita",92));
        obj.add(new Student6(18,"Vijay",59));
        obj.add(new Student6(26,"Sujata",72));
        obj.add(new Student6(12,"Suhas",72));

        JOptionPane.showMessageDialog(null,obj.toString());

        int n=obj.size();
        Student6[] arr=new Student6[n];

        obj.toArray(arr);  //copies list data to array
        JOptionPane.showMessageDialog(null,Arrays.toString(arr));
        Arrays.sort(arr);
        JOptionPane.showMessageDialog(null,Arrays.toString(arr));
    }
}

/*
import java.util.*;
import javax.swing.*;;

class Student6 implements Comparable<Student6>
{
    int rno;
    String nm;
    int mrk;
    Student6(){
        rno=mrk=0;
        nm=new String();
    }
    Student6(int a,String b,int c){
        rno=a;
        nm=b;
        mrk=c;
    }
    public String toString(){
        String a= "\nRoll no : "+rno+"\nname : "+nm+"\nmarks: "+mrk;
        return a;
    }
    void display(){
        JOptionPane.showMessageDialog(null, toString());
    }
    public int compareTo(Student6 a){
        return rno-a.rno;
    }
    public static void main(String []args){
        LinkedList<Student6>obj=new LinkedList<Student6>();
        obj.add(new Student6(11,"ajay",91));
        obj.add(new Student6(51,"ajay",92));
        obj.add(new Student6(13,"ajay",21));
        obj.add(new Student6(98,"ajay",21));
        obj.add(new Student6(5,"ajay",21));
        obj.add(new Student6(65,"ajay",21));
        JOptionPane.showMessageDialog(null, obj.toString());
        int n=obj.size();
        Student6[]arr=new Student6[n];
        obj.toArray(arr);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        Arrays.sort(arr);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
    }
}
 */
