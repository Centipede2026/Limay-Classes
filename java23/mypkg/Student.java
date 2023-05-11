package mypkg;
//serialization->
import java.io.*;
import mypkg.Util;
    
public class Student implements Serializable{
    
    int no;
    String nm;
    public Student(){
        no=0;
        nm=new String();
        }
        public String toString(){
            String s="Roll no:"+no+"\nName"+nm;
            return s;
        }
        public void display(){
            Util.display(toString());
        }
        public int getNO(){
            return no;
        }
        public String getName(){
            return nm;
        }
        public void setData(){
            no=Util.iInput("Roll no");
            nm=Util.sInput("Name");
        }
        public void setData(int n){
            no=n;
            nm=Util.sInput("Name");
        }
}