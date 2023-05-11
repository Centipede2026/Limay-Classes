import javax.swing.*;
import java.util.*;

public class Array6 
{
    public static void main(String[] args) {
        float[]k=new float[5];
    int i=0;
    while(i<k.length)
    {
        try {
            k[i]=Float.parseFloat(JOptionPane.showInputDialog(null,"Data"));
       
            }
            catch(Exception e)
            {continue;}
            i++;

    }
    JOptionPane.showMessageDialog(null,Arrays.toString(k));
}
}

//null represent parent window