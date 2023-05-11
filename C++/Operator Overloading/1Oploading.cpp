//Operator Overloading
// syntax
/*
<ret_type> operator <opr>([argument])
{
    .___ ;
    .___ ;
    return <(ret_value)>;
}*/
#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int no;
    char nm[15];
public:
    Student()
    {
        no=0;
        nm[0]='\0';
    }
    Student(Student &t)
    {
        no=t.no;
        strcpy(nm,t.nm);
    }
    ~Student(){}
    void display()
    {
        cout<<"\nRoll No:"<<no<<"\nName:"<<nm;
    }
    void setData(int a)
    {
        no=a;
        cout<<"\nName:";
        cin>>nm;
    }
    void setData()
    {
        cout<<"\nRoll No:";
        cin>>no;
        cout<<"\nName:";
        cin>>nm;
    }

    int operator==(int k)
    {
        return(no==k);
    }
    int operator>(int k)
    {
        return(no>k);
    }
    int operator<(int k)
    {
        return(no<k);
    }

    int operator==(Student &k)
    {
        return(no==k.no);
    }
    int operator>(Student &k)
    {
        return(no>k.no);
    }
    int operator<(Student &k)
    {
        return(no<k.no);
    }
};

/*
int main()
{
    Student a,b;
    a.setData(13);
    b.setData();
    a.display();
    b.display();
    if (a==13)
        cout<<"\nFound";
    else
        cout<<"\nNot Found";
    if (b>10)
        cout<<"\nMore than 10";
    else
        cout<<"\nLess or Equal to 10";

    if (a<b)
        cout<<"\nMore";
    else
        cout<<"\nLess";
    return 0;
}
*/

//array of object of Student Types
void main()
{
    Student a[5];int i=0;
    while(i<5)
        a[i++].setData();
    for(i=0;i<5;i++)
        a[i].display();
}


/*
class name number
#include <bits/stdc++.h>
#define ll long long int

using namespace std;
class Number
{
    int no;

public:
    Number()
    {
        no = 0;
    }
    Number(int a)
    {
        no = a;
    }
    Number(Number &t)
    {
        no = t.no;
    }
    ~Number()
    {
    }
    friend istream &operator>>(istream &kin, Number &t)
    {
        cout << "\n Enter no  :";
        kin >> t.no;
    }
    friend ostream &operator<<(ostream &kout, Number &t)
    {
        kout << "\n No : " << t.no;
        return kout;
    }
    Number operator+(int n)
    {
        Number t(no + n);
        return t;
    }
    friend Number operator+(int n, Number &t)
    {
        Number k(n + t.no);
        return k;
    }
    Number operator-=(int n)
    {
        Number t(no - n);
        return t;
    }
    friend Number operator+=(int n, Number &t)
    {
        Number k(n - t.no);
        return k;
    }
    Number operator+=(int a)
    {
        no = no + a;
        return (*this);
    }
    // pre increament
    Number operator++()
    {
        Number k(++no);
        return k;
    }
    // Post INcrement
    Number operator++(int)
    {
        Number k(no++);
        return k;
    }
    Number operator--()
    {
        Number k(--no);
        return k;
    }
    // Post INcrement
    Number operator--(int)
    {
        Number k(no--);
        return k;
    }
};
int main()
{
    Number a(7), b, c;
    b = a + 3;
    cout << a << b;
    c = 5 + b;
    cout << c;
    a += 5;
    cout << a;
    c -= 2;
    cout << c;
    c = ++a;
    cout << a << c;
    c = a++;
    cout << a << c;
    c = --a;
    cout << a << c;
    c = a--;
    cout << a << c;

    return 0;
}
*/