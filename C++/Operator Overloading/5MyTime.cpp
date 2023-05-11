#include <iostream>
#include <stdlib.h>
using namespace std;

class MyTime
{
    int h, m, s;
    long int toSeconds()
    {
        return h * 3600 + m * 60 + s;
    }

public:
    MyTime()
    {
        h = m = s = 0;
    }
    MyTime(long int z)
    {
        h = z / 3600;
        z = z % 3600;
        m = z / 60;
        s = z % 60;
    }
    MyTime(MyTime &t)
    {
        h = t.h;
        m = t.m;
        s = t.s;
    }
    ~MyTime() {}

    friend ostream &operator<<(ostream &out, MyTime &t)
    {
        out << "\nH:" << t.h << "\tM:" << t.m << "\tS:" << t.s;
        return out;
    }

    friend istream &operator>>(istream &in, MyTime &t)
    {
        cout << "\nH:";
        in >> t.h;
        cout << "\tM:";
        in >> t.m;
        cout << "\tS:";
        in >> t.s;
        return in;
    }

    MyTime operator+(MyTime &a)
    {
        long int z = toSeconds() + a.toSeconds();
        MyTime b(z);
        return b;
    } // c=a+b

    MyTime operator-(MyTime &a)
    {
        long int z = toSeconds() - a.toSeconds();
        MyTime b(z);
        return b;
    } // c=a-b

    int gethr() { return h; }
    int getmn() { return m; }
    int gets() { return s; }

    int operator>(MyTime &a)
    {
        return (toSeconds() > a.toSeconds());
    }
    int operator>=(MyTime &a)
    {
        return (toSeconds() >= a.toSeconds());
    }
    int operator<(MyTime &a)
    {
        return (toSeconds() < a.toSeconds());
    }
    int operator<=(MyTime &a)
    {
        return (toSeconds() <= a.toSeconds());
    }
};

int main()
{
    MyTime a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << a << b << c;
    if (a > b)
        cout << a;
    else
        cout << b;
    return 0;
}
