package mypkgg.mstock;
import mypkgg.Util;

import mypkgg.DataIo;
public interface NewDataIo extends DataIo{
    void setData(int no);
    int getNo();
    int getOpnqty();
    String getName();
    double getRate();
    boolean getState();

    

}
//set CLASSPATH=D:/java23/;
//path   D:/java23/mypkgg/mstock