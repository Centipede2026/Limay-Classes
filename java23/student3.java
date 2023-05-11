import java.util.*;
import javax.swing.*;

public class student3 {
    int no;
    String nm;
    student3()
    {
        no=0;
        nm=new String();
    }
    student3(int a,String b)
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
        ArrayList<student3>p=new ArrayList<student3>();
        int no=0;
        while(true)
        {
            try 
            {
                no=Integer.parseInt(JOptionPane.showInputDialog(null, "Roll no:"));
            }
            catch(Exception e)
            {}
            if(no==0)
              break;
            student3 a=new student3();
            a.setData(no);
            p.add(a);

            /*Iterator<student3>it=p.iterator();
            while(it.hasNext())
            {
                student3 k=it.next();
                k.display();
            }*/
            JOptionPane.showMessageDialog(null,"Data:"+p);
        }  
    }
}