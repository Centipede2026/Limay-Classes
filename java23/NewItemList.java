package mypkgg.mstock;
import mypkgg.mstock.*;
import java.io.*;
import java.util.LinkedList;
//set classpath and in java23 create a class with name UseNewItemList.java and call menu method 
//set CLASSPATH=D:\java23\;D:\java23\mypkgg
//you have error in ItemList so compile it first then go for this
public class NewItemList extends ItemList {
    public NewItemList(){
        super();
    }
    public  void load(){
        ObjectInputStream ois=null;
        try{
            ois=new ObjectInputStream(new FileInputStream("Item.dat"));
            ls=(LinkedList)(ois.readObject());
            ois.close();
        }
        catch(Exception e){}
    }
    public void save(){
        ObjectOutputStream oos=null;
        try{
            oos=new ObjectOutputStream(new FileOutputStream("Item.dat"));
            oos.writeObject(ls);
            oos.close();


        }
        catch(Exception e){}
    }
    
}
