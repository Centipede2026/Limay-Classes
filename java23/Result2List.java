import java.util.*;
import javax.swing.*;

class Result2 {
    int no;
    int[] arr;

    Result2() {
        no = 0;
        arr = new int[5];
    }

    Result2(int n) {
        no = 0;
        arr = new int[n];
    }

    Result2(int n, int m) {
        no = n;
        arr = new int[m];
    }

    public void inputMarks() {
        int i = 0;
        while (i < arr.length) {
            try {
                arr[i] = Integer.parseInt(JOptionPane.showInputDialog(null, "Marks"));
            } catch (Exception e) {
                continue;
            }
            i++;
        }
    }

    public void setData() {
        try {
            no = Integer.parseInt(JOptionPane.showInputDialog(null, "Roll No"));
        } catch (Exception e) {
        }

        int nos = 0; // number of subjects
        try {
            nos = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter subject count"));
        } catch (Exception e) {
        }

        if (nos != arr.length) {
            arr = new int[nos];
        }
        inputMarks();
    }

    public void setData(int n) // roll no
    {
        no = n;
        int nos = 0;
        try {
            nos = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter Subject Count"));
        } catch (Exception e) {
            nos = 5;
        }

        if (nos != arr.length) {
            arr = new int[nos];
        }
        inputMarks();
    }

    public int total() {
        int i = 1, tot = arr[0];
        while (i < arr.length) {
            tot += arr[i++];
        }
        return tot;
    }

    int avg() {
        return total() / arr.length;
    }

    public String toString() {
        String s = "\nRoll No.: " + no
                + "\nMarks: " + Arrays.toString(arr)
                + "\nTotal: " + total()
                + "\nAverage: " + avg();
        return s;
    }

    public void display() {
        JOptionPane.showMessageDialog(null, toString());
    }

    boolean isMax(Result2 k) {
        return total() > k.total();
    }

    boolean isMin(Result2 k) {
        return total() < k.total();
    }
}

class Result2List
{
    public static void main(String[]args)
    {
        Result2[]a=new Result2[5];
        int i=0,j=0,pos=0;
        while(i<5)
        {
            a[i]=new Result2();
            a[i].setData();
            i++;
        }

        JOptionPane.showMessageDialog(null,Arrays.toString(a));

        for(i=0;i<4;i++)
        {
            pos=i;
            for(j=i+1;j<5;j++)
            {
                if(a[j].isMin(a[pos])) //based on total marks | (a[j].no < a[pos].no) based on Roll No
                    pos=j;
            }
            if(i!=pos)
            {
                Result2 t=a[i];
                a[i]=a[pos];
                a[pos]=t;
            }
        }
        JOptionPane.showMessageDialog(null,Arrays.toString(a));
    }
}