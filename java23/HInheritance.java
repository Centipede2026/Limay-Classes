import javax.swing.*;
abstract class Array7{
    int []arr;
    Array7(){
        arr=new int[5];
    }
    void set(int pos,int d){
        arr[pos]=d;
    }
    int get(int pos){
        return arr[pos];
    }
    public String toString(){
        String s="Data\n";
        return s;

    }
    abstract void menu();//stack and quese must have the implementation of these classes
    abstract void display();
}
interface IStack{
    void push(int d);
    void pop();
    boolean isfull();
    boolean isempty();
}
interface IQueue{
    void insert(int d);
    void remove();
    boolean isQfull();
    boolean isQempty();
}
class Stack3 extends Array7 implements IStack{

    int top;
    Stack3(){
        super();
        top=-1;

    }
    public boolean isfull(){
        return top==4;
    }
    public boolean isempty(){
        return top==-1;
    }
    public void push(int d){
        if(isfull())
        JOptionPane.showMessageDialog(null, "Stack is full");
        else
        set(++top,d);
    }
    public void pop(){
        if(isempty())
        JOptionPane.showMessageDialog(null, "stack is empty");
        else
        top--;
    }
    public String toString(){
        String s="Stack";
        if(isempty())
        s=s+"empty";
        else{
            for(int i=top;i>=0;i++)
            s=s+""+get(i);
        }
        return s;
    }
    public void display(){
        JOptionPane.showMessageDialog(null, toString());
    }
    public void menu(){
            String[]options=new String[]{"push","pop","display","back"};
            int opt=0,d=0;
            while(true){
               // opt=JOptionPane.showOptionDialog(null, "choose option","stack",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null);
            opt=JOptionPane.showOptionDialog(null, "choose option","stack",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,options,0);
                if(opt==3)
                break;
            }
            switch(opt){
                case 0:
                try{
                    d=Integer.parseInt(JOptionPane.showInputDialog(null, "data"));
                }
                catch(Exception e){}
                push(d);
                break;
                case 1:
                pop();
                break;
                case 2:
                display();


            }
        }

    }
    class Queue3 extends Array7 implements IQueue{
        int front,rear;
        Queue3(){
            super();
            front=0;
            rear=0;
        }
        public boolean isQempty(){
            return (rear<front);

        }
        public boolean isQfull(){
            return rear==4;
        }
        public void insert(int d){
            if(isQfull())
            JOptionPane.showMessageDialog(null, "queue is full");
            else
            set(rear++, d);
        }
        public void remove(){
            if(isQempty())
            JOptionPane.showMessageDialog(null, "queue is empty");
            else
            front++;
        }
        public String toString(){
            String s= "Queue\n";
            if(isQempty())
            s=s+"empty";
            else
            {
                for(int i=front;i<=rear;i++)
                    s=s+" "+get(i);
                
            }
            return s;
        }
        public void display(){
            JOptionPane.showMessageDialog(null, toString());
        }
        public void menu(){
            int opt=0,d=0;
            while(true){
                opt=JOptionPane.showOptionDialog(null, "Choose option","queue",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,new String[]{ "insert","remove","display","back"},0);
                if(opt==3)
                break;
                switch(opt){
                    case 0:
                    try{
                        d=Integer.parseInt(JOptionPane.showInputDialog(null, "data"));
                    }
                    catch(Exception e){}
                   
                    insert(d);
                    break;
                    case 1:
                    remove();
                    case 2:
                    display();
                }
            
            }
        }
    }
    class HInheritance{
        public static void main(String []args){
        Array7 ref=null;
        int opt=JOptionPane.showOptionDialog(null, "choose option","Data Structure",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,new String[]{"stack","queue","exit"},0);
        if(opt==2)
            return;
        if(opt==0)
        ref=new Stack3();
        else
        ref=new Queue3();
        ref.menu();
    }
    }