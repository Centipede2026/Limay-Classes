package mypkgg.mstock;
import java.io.*;
import mypkgg.Util;



public class Item implements Serializable,NewDataIo {
    int no;
    String nm;
    int qty;
    double rate;
    boolean state;
    public Item(){
        no=qty=0;
        rate=0.0;
        state=true;
        nm=new String();

    }
    public String toString(){
        String s="\nItem \nno"+no+"\nname"+nm+"\nQuntantiy"+qty+"\nRate"+rate;
        return s;
    }
    public void setData(int n){
        no=n;
        nm=Util.sInput("Item name");
        qty=Util.iInput("Opening qty");
        rate=Util.dInput("Price per Unit");
        state=true;
    }
    public void setData(){
        int a= Util.iInput("Item ID");
        setData(a);
    }
    public void display(){
       Util.display(toString());
    }
    public int getNo(){
        return no;
    }
    public String getName(){
        return nm;

    }
    public int getOpnqty(){
        return qty;
    }
    public void delRecord(){
        state=false;
    }
    public boolean getState(){
        return state;
    }
    public double getRate(){
        return rate;
    }
    
}
