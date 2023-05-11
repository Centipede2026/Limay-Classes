class CmdArg3
{
    public static void main(String[]args)
    {
        if(args.length!=1)
            return;
        StringBuffer a=new StringBuffer(args[0]);
        StringBuffer b=a.reverse();
        String c= new String(b);
        System.out.println(c);
        StringBuffer d= b.append(1234);
        System.out.println("Data: "+d);
    }
}