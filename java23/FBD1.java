public class FBD1 {
    public static void main(String[]args){
        int i=0,uc=0,lc=0,dc=0,oc=0,val=0;
        while(i<=10){
            System.out.println("type a charactrt");
            
            try{
                val=System.in.read();
            }
            catch(Exception e){}
            if(val>=65 && val<=99)
            uc++;
            else{
                if(val>=97 && val<=122)
                lc++;
                else{
                    if(val>=48 && val<=57)
                    dc++;
                    else
                    oc++;
                }

            }
            i++;
        }
        System.out.println("upeer"+uc+"\nlower"+lc+"\ndigit"+dc+"\nother"+oc);
    }
    
}

//a->97  A->65

