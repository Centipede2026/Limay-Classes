#include <iostream>
using namespace std;

class Number
{
    int no;
public:
    Number()
    {
        no=0;
    }
    Number(int a)
    {
        no=a;
    }    
    Number(Number &t)
    {
        no=t.no;
    }
    Number operator +(int n)
    {
        Number t(no+n);
        return t;
    }
    Number operator -(int n)
    {
        Number t(no-n);
        return t;
    }
    Number operator +=(int a)
    {
        no=no+a;
        return (*this);
    }
    Number operator -=(int a)
    {
        no=no-a;
        return (*this);
    }

    //pre increment
    Number operator ++()
    {
        Number k(no++);
        return k;
    }
    //post increment
    Number operator ++(int)
    {
        Number k(++no);
        return k;
    }
    //pre decrement
    Number operator --()
    {
        Number k(no--);
        return k;
    }
    //post decrement
    Number operator --(int)
    {
        Number k(--no);
        return k;
    }
    ~Number(){}
    friend istream & operator>>(istream &kin,Number &t)
    {
        cout<<"\nEnter No: ";
        kin>>t.no;
        return kin;
    }
    friend ostream & operator<<(ostream &kout,Number &t)
    {
        kout<<"\nEnter No: ";
        return kout;
    }
    friend Number operator + (int n,Number &t)
    {
        Number k(n+t.no);
        return k;
    }
};

int main()
{
    Number a(7),b,c;
    b=a+3;
    cout<<a<<b;
    c=5+b;
    cout<<c;
    a+=5;
    cout<<a;
    c-=2;
    cout<<c;
    c= ++a;  //pre
    cout<<a<<c;
    c=a++;  //post
    cout<<a<<c;
    c= --a;  //pre
    cout<<a<<c;
    c=a--;  //post
    cout<<a<<c;
    return 0;
}