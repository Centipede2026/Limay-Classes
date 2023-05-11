//min and max

public class Cmdarg2 {
    public static void main(String[]args){
        if(args.length==1 || args.length==0){
            System.out.println("invalid output");
        }
        int max=0,min=0,i=0,val=0;
        while(i<args.length){
            try{
                val=Integer.parseInt(args[i]);
            }
            catch(Exception e){
                i++;
                continue;
            }
            if(val>max){
                max=val;
                i++;
            }
            else if(val<min){
                min=val;
                i++;
            }
            else{
                i++;
            }
        }
        System.out.println("max :"+max);
        System.out.println("min :"+min);
    }
}
