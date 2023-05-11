#include <iostream>
#include<string>
using namespace std;

class Student
{
    int rno;
    char nm[15];
    double mrk;
    
    public:
    void set(int a,char *b,double c)
    {
        rno=a;
        strcpy(nm,b);
        mrk=c;
    }
    void set(int a,char *b)
    {
        rno=a;
        strcpy(nm,b);
        cout<<"\nMarks:";
        cin>>mrk;
    }
    void set(int a)
    {
        rno=a;
        cout<<"\nName";
        cin>>nm;
        cout<<"\nMarks";
        cin>>mrk;
    }
    void set()
    {
        cout<<"\nRoll No:";
        cin>>rno;
        set(rno);
    }
    void display()
    {
        cout<<"\n Student Data\n Roll No:"<<rno<<"\nname:"<<nm<<"\nMarks"<<mrk;
    }
    int getNo()
    {
        return rno;
    }
    char *getName()
    {
        return nm;
    }
    double getMarks()
    {
        return mrk;
    }
    void setMarks(double a)
    {
        mrk=a;
    }
};
