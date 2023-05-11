import java.util.*;
import java.io.*;
import javax.swing.*;

class student1 {
    int no;
    String nm;

    student1(){
        no=0;
        nm=new String();
    }
    student1(int a,String b)
    {
        no=a;
        nm=b;
    }

    void setData(){
        try {
            no=Integer.parseInt(JOptionPane.showInputDialog(null,"Roll no: "));
        } catch (Exception e) {
            
        }
    }
}
