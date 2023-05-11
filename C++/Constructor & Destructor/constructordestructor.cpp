// These are special purpose function
// 2.always to be define in he public section of the class
// 3.these do not have returning type not even void
#include<iostream>
using namespace std;
class Num
{
    int a,b;
public:
    Num()
    {
        a=b=0;
        cout<<"\nDefault";
    }
    Num(int p)
    {
        a=b=p;
        cout<<"\nPara1";
    }
    Num(int p,int q)
    {
        a=b=p;
        cout<<"\nPara2";
    }
    Num(Num &t)
    {
        a=t.a;
        b=t.b;
        cout<<"\nCopy";
    }
    
    ~Num()
    {
        cout<<"\nDestructor";
    }

    void set()
    {
        cout<<"\nA";cin>>a;
        cout<<"\nB";cin>>b;
    }
    void set(int p,int q=0)
    {
        a=p;b=q;
    }
    void display()
    {
        cout<<"\nA a:"<<a; 
        cout<<"\nB b:"<<b; 
    }
    void swap()
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
    Num add(int x)
    {
        Num t;   //or t(a+x,b+x)
        t.a=a+x;
        t.b=b+x;
        return t;
    }

    Num add(Num &k)
    {
      Num t;   //or t(a+k.x,b+k.x)
      t.a=a+k.a;
      t.b=b+k.b;
      return t;  //return(a+k.a,b+k.b)
    }

    Num sub(int x)
    {
        Num t;   //or t(a+x,b+x)
        t.a=a-x;
        t.b=b-x;
        return t;
    }

    Num sub(Num &k)
    {
      Num t;   //or t(a+k.x,b+k.x)
      t.a=a-k.a;
      t.b=b-k.b;
      return t;  //return(a+k.a,b+k.b)
    }
}

int main()
{
    Num p;
    Num q;
    p.set();
    p.display();
    q=p.add(3);
    q.display();
    Num r;
    r=p.add(q);
    r.display();
    r.swap();
    r.display();
    return 0;
}

/*

*/