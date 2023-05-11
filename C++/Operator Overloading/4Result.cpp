#include <iostream>
using namespace std;

class Result
{
    int rno;
    int mrk[5];

public:
    Result();
    Result(Result &);
    ~Result() {}
    friend istream &operator>>(istream &, Result &);
    friend ostream &operator<<(ostream &, Result &);
    int total();
    double avg()
    {
        return double(total()) / 5;
    }
    int operator>(int n)
    {
        return (total() > n);
    }
    int operator<(int n)
    {
        return (total() < n);
    }

    int getNo()
    {
        return rno;
    }

    int operator>(double d)
    {
        return (avg() > d);
    }
    int operator<(double d)
    {
        return avg() < d;
    }
};

Result::Result()
{
    rno = 0;
    for (int i = 0; i < 5; i++)
    {
        mrk[i] = 0;
    }
}

Result::Result(Result &t)
{
    rno = t.rno;
    for (int i = 0; i < 5; i++)
    {
        mrk[i] = t.mrk[i];
    }
}

int Result::total()
{
    int i = 1, tot = mrk[i];
    while (i < 5)
    {
        tot += mrk[i];
        i++;
    }
    return tot;
}

istream & operator>>(istream &in,Result &p)
{
    int i=0;
    cout<<"\nRoll No:";
    in>>p.rno;
    cout<<"\nMarks:";
    while (i<5)
    {
        in>>p.mrk[i];
        i++;
    }
    return in;
}

ostream & operator<<(ostream &out,Result &p)
{
    int i=0;
    out<<"\nRoll No:"<<p.rno;
    out<<"\nMarks:";
    while (i<5)
    {
        out<<" "<<p.mrk[i];
        i++;
    }
    return out;
}

int main()
{
    Result b;
    cin>>b;
    cout<<b;
    cout<<"\nTotal:"<<b.total();
    cout<<"\nAvg:"<<b.avg();
    if (b>90)
    {
        cout<<"\n>90 Marks";
    }
    else
    {
        cout<<"\n<90 Marks";
    }
    if (b>90)
    {
        cout<<"\n1st Class";
    }
    else
        cout<<"\nPass Class";
    return 0;
}
