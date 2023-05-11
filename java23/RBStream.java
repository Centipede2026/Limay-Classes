import java.io.File;
import java.io.FileInputStream;
import mypkgg.*;

//orogram to read byte of data from this input stream classes

public class RBStream {
    //reads the next byte of data from input stream the value as an int in range of 0 to 255. if no byte is available
    //beacaue the end of the string has been reached the value -1 is written . this method blocks untill the input data 
    //available 
    public static void main(String []args){
        int no=0;
        File f=new File("num.dat");
        if(f.exists()==false){
            Util.display("file not find");
            return;
        }
        FileInputStream fis:new FileInputStream(f);
        while(true){
            no=fis.read();
            if(no==-1)
            break;
            Util.display("data"+no);
        }
        fis.close();
    }
}
