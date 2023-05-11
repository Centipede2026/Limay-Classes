// Create a headerfile named as mytime.h
#include <iostream>
using namespace std;

class MyTime
{
    int h, m, s;
    long int toSec()
    {
        return h * 3600l + m * 60 + s;
    }

public:
    MyTime()
    {
        h = m = s = 0;
    }
    MyTime(int a, int b = 0, int c = 0)
    {
        h = a;
        m = b;
        s = c;
    }
    MyTime(long int t)
    {
        h = t / 3600;
        t = t % 3600;
        m = t / 60;
        s = t % 60;
    }
    MyTime(MyTime &a)
    {
        h = a.h;
        m = a.m;
        s = a.s;
    }
    ~MyTime() {}
    void setTime()
    {
        cout << "\nHr:";
        cin >> h;
        cout << "\nMn:";
        cin >> m;
        cout << "\nSs:";
        cin >> s;
    }

    void setTime(int a, int b = 0, int c = 0)
    {
        h = a;
        m = b;
        s = c;
    }

    void setTime(long int t)
    {
        h = t / 3600;
        t = t % 3600;
        m = t / 60;
        s = t % 60;
    }

    void display()
    {
        cout << "\nH:"
             << "\tm:" << m << "\ts:" << s;
    }

    int isMore(MyTime &b)
    {
        return ((toSec()) > b.toSec());
    }
    int isLess(MyTime &b)
    {
        return (toSec() < b.toSec());
    }

    MyTime add(MyTime &t)
    {
        long int a = toSec() + t.toSec();
        MyTime k(a);
        return k;
    }

    MyTime sub(MyTime &t)
    {
        long int a = toSec() - t.toSec();
        MyTime k(a);
        return k;
    }
};