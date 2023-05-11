//reverse a number using reverse function

public class Cmdagr3a {
    public static void main(String []args){
        if(args.length!=1){
            System.out.println("invalid");
        }
        int val=0;
        try{
            val=Integer.parseInt(args[0]);
        }
        catch(Exception e){
            System.out.println("invalid");
        }
        StringBuffer s=new StringBuffer(""+val);
        StringBuffer d=s.reverse();
        System.out.println(d);
        //String a= d.toString();
        //System.out.println(d);
    }
}
