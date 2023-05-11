/*class Table1 {
    public static void main(String[] args)
    {
        int n=(int)(Math.random()*100);
        String str="Table of "+n+" =";  //it ends with a null character
        for (int i = 1; i <= 10; i++) {
            str=str+" "+(n*i);
            System.out.println(str);
        }
    }
}*/

/*class Table2 {
    public static void main(String[] args)
    {
        int no=(int)(Math.random()*100);
        int i=1;
        System.out.println("Table of "+no+"= ");
        while(i<=10){
            System.out.println(" "+(no*i));
            i++;
        }
    }
}*/

class Table3 {
    public static void main(String[] args)
    {
        if (args.length!=1) {
            System.out.println("Invalid Arguments");
            return;
        }
        int no=0,i=1;
        try{
            no=Integer.parseInt(args[0]);
        }
        catch(Exception e)
        {
            System.out.println("Invalid Data");
            return;
        }
        System.out.println("Table");
        for(i=1;i<=10;i++)
        {
            System.out.println(" "+(no*i));
        }
    }
}