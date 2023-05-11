import javax.swing.*;
class Number1{
    int no;
    Number1(){
        no=0;
    }
    Number1(int a){
        no=a;
    }
    void setdata(){
       try{
        no=Integer.parseInt(JOptionPane.showInputDialog(null, "no"));
       }
       catch(Exception e){}


    }
    public String toString(){
        String s="\nNo"+no;
        return s;
    }
    void display(){
        JOptionPane.showMessageDialog(null,toString());

    }
    class Number2 extends Number1{
        String nm;
        Number2(){
            super();
            nm="";
        }
        Number2(int a , String b){
            super(a);
            nm=b;
        }
        public String toString(){
            String s=super.toString()+"\nname"+nm;
            return s;

        }
        void display(){
            JOptionPane.showInputDialog(null,toString());
        }
        void setdata(){
            super.setdata();
            nm=JOptionPane.showInputDialog(null, "name");
        }
        
        void setData(int a){
            super.setdata(a);
            nm=JOptionPane.showInputDialog(null,"name");
        }
    }
    class SIngeritance{
        public static void main(String[]args) {
            Number1 a= new Number1(101);
            a.display();
            Number2 b = new Number2();
            b.setdata();
            b.display();
            a=b;
            a.display();
            
        }
    }
}