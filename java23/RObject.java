import java.io.*;
import mypkgg.*;
//Wobject & RObject related to each other//
 class RObject {
    public static void main(String []args){
        FileInputStream fis=null;
        ObjectInputStream ois=null;
        try{
            fis=new FileInputStream("stu.dat");
            ois=new ObjectInputStream(fis);
        }
        catch(Exception e){}
        while(true){
            Student s=null;
            try{
                s=(Student)ois.readObject();//returning object of type student

            }
            catch(Exception e){
                break;

            }
            s.display();
        }
        try{
            fis.close();
            ois.close();
        }
        catch(Exception e){}

    }

    
}
