import java.io.*;
public class KBD4 {
    
        public static void main(String[] args) {
            InputStreamReader isr =null;
            BufferedReader br =null;
            int no =0,i=1;
            String str ="Table\n ";
            try{
                isr = new InputStreamReader(System.in);
                br = new BufferedReader(isr);
            }
            catch(Exception e){}
            System.out.println("Enter no:\n ");
        
            try{
                no = Integer.parseInt(br.readLine());
            }
            catch(Exception e){{no=5;}
                while (i<=10) 
                    str = str +" "+(no*i++);
                
                System.out.println(str);
               
            }
            //System.out.println("NO: "+no);
        
    }
}