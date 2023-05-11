import javax.swing.*;
import java.util.*;

class Student9
{
    int no;
    String nm;

    Student9(){
        no=0;
        nm="";
    }

    Student9(int a,String b){
        no=a;
        nm=b;
    }

    public String toString()
    {
        return "Roll No "+ no +"\nName"+nm;
    }

    public void display()
    {
        JOptionPane.showMessageDialog(null,toString());
    }
}

class MyList extends LinkedList<Student9>
{
    MyList()
    {
        super();
    }

    Student9 search(int no)
    {
        Student9 ref=null;
        int i=0,n=size();

        while(i<n)
        {
            ref=get(i);
            if(ref.no==no)
                break;
            i++;
        }
        if(i==n)
            ref=null;

        return ref;
    }
}

class StudentList
{
    public static void main(String[] args)
    {
        MyList a=new MyList();
        int no=0;
        while(true)
        {
            try{
                no=Integer.parseInt(JOptionPane.showInputDialog(null,"No"));
            }catch(Exception e){continue;}

            if(no==0)
                break;

            Student9 ref=a.search(no);
            if(ref!=null)
                JOptionPane.showMessageDialog(null,"Record Exists");
            else{
                ref=new Student9(no,JOptionPane.showInputDialog(null,"Name"));
                a.add(ref);
            }
            
            JOptionPane.showMessageDialog(null,"Data\n"+a);
        }
    }
}


