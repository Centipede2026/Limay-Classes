#include <bits/stdc++.h>

using namespace std;
class Num
{
    int a, b;

public:
    Num()
    {
        a = b = 0;
        cout << "\n Default";
    }
    Num(int p)
    {
        a = b = p;
        cout << "\n Paraz";
    }
    Num(int p, int q)
    {
        a = b = p;
        cout << "\n Paraz2";
    }
    Num(Num &t)
    {
        a = t.a;
        b = t.b;
        cout << "\n copy constructor";
    }
    ~Num()
    {
        cout << "\n Destructor";
    }
    void set()
    {
        cout << "\n A :";
        cin >> a;
        cout << "\n B :";
        cin >> b;
    }
    void set(int p, int q = 0)
    {
        a = p;
        b = q;
    }
    void display()
    {
        cout << "\n A a" << a;
        cout << "\n B b" << b;
    }
    void swap()
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    Num add(int x)
    {
        // Num(a+x,b+x)
        // return t;
        // || OR
        Num t;
        t.a = a + x;
        t.b = b + x;
        return t;
        // || OR
        // return Num(a+x,b+x);
    }
    Num sub(int x)
    {
        // Numt(a-x,b-x)
        // return t;
        // || OR
        Num t;
        t.a = a - x;
        t.b = b - x;
        return t;
        // || OR
        // return Num(a-x,b-x);
    }
    Num add(Num &k)
    {
        // Numt(a+k.a,b+k.b)
        // return t;
        // || OR
        Num t;
        t.a = a + k.a;
        t.b = b + k.b;
        return t;
        // || OR
        // return Num(a+k.a,b+k.b);
    }
    Num sub(Num &k)
    {
        // Numt(a-k.a,b-k.b)
        // return t;
        // || OR
        Num t;
        t.a = a - k.a;
        t.b = b - k.b;
        return t;
        // || OR
        // return Num(a-k.a,b-k.b);
    }
};
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    Num p;
    Num q;
    p.set();
    p.display();
    q = p.add(3);
    q.display();
    Num r;
    r = p.add(1);
    r.display();
    r.swap();
    r.display();

    return 0;
}