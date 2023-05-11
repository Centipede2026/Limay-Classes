//sortong on bases of total,average and roll number

import javax.swing.*;
import java.util.*;

 class Result3 implements Comparable<Result3>,Comparator<Result3> {
    int no;
    String nm;
    int []arr;
    int total;
    int avg;
    Result3(){
        no=total=avg=0;
        arr= new int[5];
        nm=new String();


    }
    public String toString(){
        String s="Roll no"+no+"\nName"+nm+"\nMarks"+Arrays.toString(arr)+"\nTotal"+total+"\nAverage"+avg;
        return s;
    }
    void display(){
        JOptionPane.showMessageDialog(null, toString());
    }
    void sum(){
        total=0;
        int i=0;
        while(i<5){
            total+=arr[i];
            i++;
        }
        avg=total/5;
    }
    public int compareTo(Result3 a){
        return no-a.no;//comparable interface number
    }
    public int compare(Result3 a , Result3 b){
        return(a.nm).compareTo(b.nm);
    }
    void setdata(int n){
        no=n;
        int i=0;
        nm=JOptionPane.showInputDialog(null, "name");
        while(i<5){
            try{
                arr[i]=Integer.parseInt(JOptionPane.showInputDialog(null, "marls"));
            }
            catch(Exception e){ 
                arr[i]=0;
            }
            i++;
            
        }
        sum();

    }
    public static Comparator<Result3>Ordertot=new Comparator<Result3>() {
        public int compare(Result3 a, Result3 b){
            return a.total-b.total;
        }
    };
    public static Comparator<Result3>OrderAvg=new Comparator<Result3>() {
        public int compare(Result3 a, Result3 b){
            return a.avg-b.avg;
        }
    };
    public static Comparator<Result3>OrderTotNo=new Comparator<Result3>() {
        public int compare(Result3 a, Result3 b){
            int res=a.total=b.total;
            if(res==0){
                return a.no=b.no;
            }
            else 
            return res;
        }
    };
    public static void main(String []args){
        LinkedList<Result3> a=new LinkedList<Result3>();
        int n=0;
        while(true){
            try{
                n=Integer.parseInt(JOptionPane.showInputDialog(null, "roll no"));
            }
            catch(Exception e){
                continue;
            }
            if(n==0)
            break;
            Result3 b= new Result3();
            b.setdata(n);
            a.add(b);


        }
        JOptionPane.showMessageDialog(null,"Data: "+a);
        n=a.size();
        Result3[]arr=new Result3[n];
        a.toArray(arr);
        JOptionPane.showMessageDialog(null,Arrays.toString(arr));
        Arrays.sort(arr);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        
        Arrays.sort(arr,new Result3());
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        
        Arrays.sort(arr,Result3.Ordertot);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        
        Arrays.sort(arr, Result3.OrderAvg);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));
        
        Arrays.sort(arr, Result3.OrderTotNo);
        JOptionPane.showMessageDialog(null, Arrays.toString(arr));




    }


    
}
