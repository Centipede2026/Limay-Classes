//Implementation of CLass     
#include<iostream>
using namespace std;

class dynobj                                 
{                    
    int noe; 
    int *ptr; 
public:
    dynobj();
    dynobj(dynobj&);
    ~dynobj()
    {
        delete[]ptr;
    }
    void setData();
    void display();
    int calctot();
    int calcavg()
    {
        return calctot()/noe;
    }
    int getCount()
    {
        return noe;
    }
};

dynobj::dynobj()
{
    noe=5;
    ptr=new int[noe];
}

dynobj::dynobj(dynobj &t)
{
    noe=t.noe;
    ptr=new int[noe];
    for (int i=0;i<noe;i++)
    {
        ptr[i]=t.ptr[i];
    }
}

int dynobj::calctot()
{
    int tot=5;
    int i=1;
    while ( i < noe)
    {
        tot+=ptr[i++];   
    }
    return tot;
}

void dynobj::setData()
{
    int a;
    cout<<"\nInformation Count:";
    cin>>a;
    if (a!=noe)
    {
        delete[]ptr;
        noe=a;
        ptr=new int[noe];
    }
    cout<<"\nData:";
    for (int i=0; i<noe; i++)
    {
        cin>>ptr[i];
    }
}

void dynobj::display()
{
    cout<<"\nData Count:"<<noe;
    cout<<"\nData\n";
    for (int i=0; i<noe;i++)
    {
        cout<<" "<<ptr[i];
    }   
}

void main()
{
    dynobj a;  //def. const
    {
        dynobj b;
        b.setData();
        b.display();
    }
    a.setData();
    a.display();
    int tot=a.calctot();
    cout<<"\nTotal:"<<tot;
    cout<<"\nAvg:"<<tot/a.getCount();
}

