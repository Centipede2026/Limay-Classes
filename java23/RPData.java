//read primitive data
import java.io.*;
import mypkgg.*;

public class RPData {
    public static void main(String []args){
        int no=0;
        String nm=new String();
        double mek=0.0;
        FileInputStream fis=null;
       DataInputStream dis=null;
        try{
            fis=new FileInputStream("stu.dat");
            dis= new DataInputStream(fis);
        }
        catch(Exception e){}
        while(true){
            try{
                no=dis.readInt();
                nm=dis.readUTF();
                mek=dis.readDouble();

            }
            catch(Exception e){break;}
        }
    }
}
