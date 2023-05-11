#include <bits/stdc++.h>
#define hitman main
#define ll long long int

using namespace std;
class A
{
protected:
    int a;

public:
    A()
    {
        a = 0;
    }
    ~A() {}
    void setA()
    {
        cout << "\n A a :";
        cin >> a;
    }
    void displayA()
    {
        cout << "\n A a :" << a;
    }
};
class B : public A
{
protected:
    int b;

public:
    B() : A()
    {
        b = 0;
    }
    ~B() {}
    void setA()
    {
        cout << "\n B b :";
        cin >> a;
    }
    void displayB()
    {
        cout << "\n B b :" << b;
    }
};
class C : public B
{
protected:
    int c;

public:
    C() : B()
    {
        c = 0;
    }
    ~C() {}
    void setA()
    {
        cout << "\n C c :";
        cin >> c;
    }
    void displayB()
    {
        cout << "\n B c :" << c;
    }
};

int hitman()
{

    return 0;
}