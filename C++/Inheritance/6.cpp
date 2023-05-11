#include<iostream>
#include<algorithm>
using namespace std;

class A
{
private:
    int a;
public:
    virtual void set()
    {
        cout<<"\nA a:";
        cin>>a;
    }
    virtual void display()
    {
        cout<<"\nA a:"<<a;
    }
};

class B : public A
{
    int b;
public:
    void set()
    {
        cout << "\n B b: ";
        cin >> b;
    }
    void display()
    {
        cout << "\n B b:" << b;
    }
};

class C : public B
{
    int c;
public:
    void set()
    {
        cout << "\nC c:";
        cin >> c;
    }
    void display()
    {
        cout << "\nC c: " << c;
    }
};


int main()
{
    A *optr;
    A obja;
    optr=&obja;
    optr->set();
    optr->display();
    B objb;
    optr=&objb;
    optr->set();
    optr->display();
    optr=new C;
    optr->set();
    optr->display();
    C *cptr=new C;
    cptr->set();
    cptr->display();
    return 0;
}