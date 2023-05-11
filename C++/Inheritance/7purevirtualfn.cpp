#include<iostream>
#include<algorithm>
using namespace std;
/*
class dim
{
protected:
    int w,h;
public:
    dim() 
    {
        w=h=0;
    }
    dim(int a,int b)
    {
        w=a;
        h=b;
    } 
    ~dim() {}
    virtual void area()=0;
};

class Rect:public dim
{
public:
    Rect():dim()
    {}
    Rect(int a,int b):dim(a,b)
    {}
    ~Rect(){}
    void area()
    {
        cout<<"\nRect Area:"<< w*h;
    }
};

class Trang:public Rect
{
public:
    Trang():Rect(){}
    Trang(int a,int b):Rect(a,b){}
    ~Trang(){}
    void area()
    {
        cout<<"\nTrang Area:"<<(w*h)/2;
    }
};

int main()
{
    dim *dptr;
    dptr=new Rect(10,9);
    dptr->area();
    dptr=new Trang(15,9);
    dptr->area();
    return 0;
}
*/
/*
It is normal practice to declare a function virtual inside the base class and redefine it in the derived classes,
the function inside the base class is seldom used for performing any task, it only serves as a place holder.
For example, We do not have any object of class dim and therefore the function area in the base class has been 
defined empty. Such functions are called do-nothing functions.
A do-nothing function may be defined as follows:
*                                       virtual void area()=0;
Such functions are called pure virtual functions. A pure virtual function is a function declared in a base class
that has no definition relative to the base class, in such cases the compiler requires each derived class to either 
define the function or redeclare it as a pure virtual function, remember that a class containing pure virtual function
can not be used to declare any object of it's own.Such classes are called abstract base classes. The main objective of
an abstract base class is to provide some traits to the derived classes and to create a base pointer required for 
achieving run-time polymorphism.
*/


class dim   //Abstract Base Class
{
protected:
    int w,h;
public:
void set()
{
    cout<<"\nWidth:";cin>>w;
    cout<<"\nHeight:";cin>>h;
}
    dim() 
    {
        w=h=0;
    }
    dim(int a,int b)
    {
        w=a;
        h=b;
    } 
    ~dim() {}
    virtual void area()=0;
};

class Rect:public dim
{
public:
    Rect():dim()
    {}
    Rect(int a,int b):dim(a,b)
    {}
    ~Rect(){}
    void area()
    {
        cout<<"\nRect Area:"<< w*h;
    }
};

class Trang:public Rect
{
public:
    Trang():Rect(){}
    Trang(int a,int b):Rect(a,b){}
    ~Trang(){}
    void area()
    {
        cout<<"\nTrang Area:"<<(w*h)/2;
    }
};

int main()
{
    cout<<"\nArea\n1.Rect\n2.trang\n3.Exit\nChoice:";
    int opt;
    dim *dptr;
    cin>>opt;
    if(opt<1 || opt >2)
        return 0;
    if(opt==1)
    dptr=new Rect();
    else
    dptr=new Trang();
    dptr->set();
    dptr->area();

    return 0;
}
