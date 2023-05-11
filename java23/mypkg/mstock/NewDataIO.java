package mstock;
import mypkg.DataIO;

public interface NewDataIO extends DataIO 
{
    void setData(int id);
    int getNo();
    int getOpnQty();
    String getName();
    double getRate();
    boolean getState();
}

//set cmd d:\java23\mypkg\mstock
