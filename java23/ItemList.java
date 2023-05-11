package mypkgg.mstock;
import java.util.*;
import java.io.*;
import mypkgg.*;
import mypkgg.mstock.*;

//solve this 
//class in java23 named UseItem.java call menu method there
public class ItemList implements Transaction,Menu,ObjectAmd,Serializable {
    LinkedList<Item>ls;
    Item ref;
    public ItemList(){
       ref=null;
       ls=new LinkedList<Item>();
    }
    public boolean search(int no){
        int i=0,n=ls.size();
        while(i<n){
            if(ref.no==no)
            break;
            i++;
        }
        return(i==n)?false:true;
    }
    public void addQty(){
        int no=Util.iInput("item no");
        if(search(no)==false|| ref.getState()==false){
            Util.display("invalid");
            return;
        }
        ref.display();
        int q=Util.iInput("purchase quantity");
        if(q<0)
        return;
        ref.qty=ref.qty+q;
    }
    public void subQty(){
        int no=Util.iInput("item no");
        if(search(no)==false|| ref.getState()==false){
            Util.display("invalid");
            return;
        }
        ref.display();
        int q=Util.iInput("sell Quantity");
        if(q<0)//??//
        return;
        ref.qty=ref.qty-q;
    }
    public void add(){
        int no=Util.iInput("item id");
        if(search(no)==true)
        Util.display("record exists");
        else{
            ref=new Item();
            ref.setData(no);
            ls.add(ref);
        }
    }
    public void mod(){
        int no=Util.iInput("item id");
        if(search(no)==false)
        Util.display("record not exist");
        else{
            if(ref.getState()==false)
            Util.display("record not exist");
            else
            ref.setData(no);
        }
    }
    public void delRecord(){
        int no=Util.iInput("item id");
        if(search(no)==false)
        Util.display("record not exist");
        else{
            if(ref.getState()==false)
            Util.display("record not exist");
            else
            ref.delRecord();
        }
    }
    public void display(){
        int i=0,n=ls.size();
        while(i<n){
            ref=ls.get(i);
            ref.display();
            i++;

        }
    }
    public void del()
    {
        
    }
    public int getbalance(){
       return ref.qty;
    }
    public void getStock(){
        int no=Util.iInput("Item no");
        if(search(no)==false)
        return;
        ref.display();
    }
    public void menu(){
        String[]choice=new String[]{"add","mod","del","Display all","Purchase","sell","balance","Balance qty","exit"};
        while(true){
            int opt=Util.oInput("choose option","Stock",choice);
            if(opt==7)
            break;
           switch(opt){
            case 0:
            add();
            break;
            case 1:
            mod();
            break;
            case 2:
            del();
            break;
            case 3:
            display();;
            break;
            case 4:
            addQty();
            break;
            case 5:
            subQty();
            break;
            case 6:
            getStock();
            break;
           }
            
           }
        }
    }



