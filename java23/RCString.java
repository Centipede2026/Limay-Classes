
import java.io.*;

public class RCString {
    public static void main(String []args) throws Exception{
        FileReader fr=new FileReader("abc.txt");
        int no=0;
        while(true){
            no=fr.read();
            if(no==-1)
            break;
            System.out.println((char)no);
        }
        fr.close();

    }
    
}
