class sum {
    public static void main(String[]args)
    {
        if(args.length==0)
        {
            System.out.println("Invalid Arguments");
            return;
        }
        int no=0,i=0,total=0,n=args.length;
        while(i<n)
        {
            try{
                no=Integer.parseInt(args[i]);
            }
            catch(Exception e)
            {
                no=0;
            }
            total+=no;
            i++;
        }
        System.out.print("Total:"+total);
    }
}
