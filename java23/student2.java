import java.util.*;
import javax.swing.*;

public class student2 {
    int no;
    String nm;
    student2()
    {
        no=0;
        nm=new String();
    }
    student2(int a,String b)
    {
        no=a;
        nm=b;
    }
    void setData()
    {
        try 
        {
            no=Integer.parseInt(JOptionPane.showInputDialog(null, "roll no:"));
            nm=JOptionPane.showInputDialog(null, "Name:");
        }
        catch(Exception e)
        {}
    }
    void setData(int no)
    {
        this.no=no;
        nm=JOptionPane.showInputDialog(null, "Name:");
    }
    public String toString()
    {
        String s="\nRoll No:"+no+"\nName:"+nm;
        return s;
    }
    void display()
    {
        JOptionPane.showMessageDialog(null, "Data:"+this); //this points at invoking object means the object which is calls display method
        //this will convert Student type object into string type object and then concatinates
        
        //or
        //JOptionPane.showMessageDialog(null, "Data:"+toString());
    }
    public static void main(String [] args)
    {
        student2 a[]=new student2[5];
        int i=0;
        while(i<a.length)
        {
          a[i]=new student2();
          a[i].setData(i+1);
          i++;
        }
        JOptionPane.showMessageDialog(null, Arrays.toString(a));
    }
}