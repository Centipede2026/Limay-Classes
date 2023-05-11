import javax.swing.*;
import java.util.*;

interface Isize{
    int size=5;
}
interface DataIO{
    void input();
    void display();
    void input(int no);
}
interface Icalculate{
    int total();
    int avg();
}

class Student5 implements Isize,DataIO,Icalculate{
    int no;
    int []mrk;
    Student5(){
        no=0;
        mrk=new int[size];
    }
    public int total(){
        int tot=mrk[0],i=1;
        while(i<size){
            tot+=mrk[i++];
        }
        return tot;
        

    }
    public int avg(){
        return total()/size;
    }
    public void input(){
        int i=0;
        try{
            no=Integer.parseInt(JOptionPane.showInputDialog(null, "number"));
            while(i<size){
                mrk[i]=Integer.parseInt(JOptionPane.showInputDialog(null, "marks"));
                i++;

            }

        }
        catch(Exception e){}
    }
   public String toString(){
    String s="number"+no+"\n marks"+Arrays.toString(mrk)+"\navg"+avg();
    return s;
   }
   public void display(){
    JOptionPane.showMessageDialog(null, toString());
   }
   public void input(int n){
    int i=1;
        try{
            n=Integer.parseInt(JOptionPane.showInputDialog(null, "number"));
            while(i<size){
                mrk[i]=Integer.parseInt(JOptionPane.showInputDialog(null, "marks"));
                i++;

            }

        }
        catch(Exception e){}

   }
   public static void main(String []args){
    Student5 a= new Student5();
    a.input();
    a.avg();
    a.total();
    a.input(5);
    DataIO b=new Student5();
    b.input();
    b.display();
    b.input(5);
    Icalculate c=new Student5();
    c.avg();
    


   }
}