#include <bits/stdc++.h>
using namespace std;

class A
{
protected:
    int a;

public:
    void set()
    {
        cout << "\n A a:";
        cin >> a;
    }
    void display()
    {
        cout << "\n A a: " << a;
    }
};

class B : public A
{
protected:
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
protected:
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
    A obja;
    obja.set();
    obja.display();
    B objb;
    objb.A ::set();
    objb.set();
    objb.A::display();
    objb.display();
    C objc;
    objc.A ::set();
    objc.B ::set();
    objc.set();
    objc.A ::display();
    objc.B ::display();
    objc.display();
    return 0;
}