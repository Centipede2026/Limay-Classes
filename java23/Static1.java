import java.io.*;

class Static1 {
    static int no;
    static BufferedReader br;
    static{
        try{
            br=new BufferedReader (new InputStreamReader (System.in));
        } catch (Exception e) {}
    }
    static void input()
    { 
        System.out.println("ENter No:");
        try{
            no=Integer.parseInt(br.readLine());
        }
        catch(Exception e){}
    }

    static void table()
    {
        int i=1;
        String s="Table\n";
        while(i<=10)
        {
            s=s+" "+(no*i);
            i++;
        }
        System.out.println(s);
    }

    static void display()
    {
        System.out.println("No:"+no);
    }

    public static void main(String[]args)
    {
        input();
        display();
        table();
    }
}

