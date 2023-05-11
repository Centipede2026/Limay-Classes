import java.io.*;

public class kbd3 {
    public static void main(String[] args) {
        InputStreamReader isr = null;
        BufferedReader br = null;
        try {
            isr = new InputStreamReader(System.in);
            br = new BufferedReader(isr);
        } catch (Exception e) {
        }
        int no=0;
        System.out.println("Enter Number: ");
        try {
            no=Integer.parseInt(br.readLine());
        } 
        catch (Exception e) {
            System.out.println("Invalid");
        }
        System.out.println(""+no);
        /*
        --To binary--
        String s="";
        while(no>0)
        {
            s=""+(no%2)+s;
            no/=2;
        }
        System.out.println("Result:" + s);
        
        OR
        */
        System.out.println("Result:"+Integer.toBinaryString(no));
        return;
    }
}