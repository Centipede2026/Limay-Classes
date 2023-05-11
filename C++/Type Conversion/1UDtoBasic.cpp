// Type Conversion from user defined to Basic
#include<iostream>
#define M 5
using namespace std;

class Vector

{
    int x[M];
public:
    Vector();
    ~Vector(){}
    friend istream & operator >> (istream &,Vector &);
    friend ostream & operator << (ostream &,Vector &);
    int calctot();
    operator int()
    {
        return calctot();
    }
    operator double()
    {
        int tot=*this;  //type conversion
        return double(tot)/M;
    }
};

Vector::Vector()
{
    for(int i=0;i<M;i++)
        x[i]=0;
}

int Vector::calctot()
{
    int tot=x[0],i=1;
    while (i<M)
    {
        tot+=x[i++];
    }
    return tot;
}

istream & operator >> (istream & kin, Vector &p)
{
    int i=0;
    cout<<"\nData\n";
    while (i<M)
    {
        kin>>p.x[i];
        i++;
    }
    return kin;
}


ostream & operator << (ostream & kout, Vector &p)
{
    int i=0;
    kout<<"\nData\n";
    while (i<M)
    {
        kout<<p.x[i]<<" ";
        i++;
    }
    return kout;
}

int main()
{
    Vector p;
    cin>>p;
    cout<<p;
    int tot=p;
    double avg=p;
    cout<<"\nTotal: "<<tot;
    cout<<"\nAvg: "<<avg;
    return 0;
}
