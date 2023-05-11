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
    A *aptr = &obja;
    aptr->set();
    aptr->display();
    B objb;
    aptr = &objb; // this is balanced we can make call for a pointers as A is base class
    aptr->set();
    aptr->display();    // above two stmts make call for a methods to avoid this we need to caste
    ((B *)aptr)->set(); // type casting to call methods for B by doing so B methods are called
    ((B *)aptr)->display();
    C *cptr; // C objects are getting called
    C objc;
    cptr = &objc;
    cptr->set();
    cptr->display();

    return 0;
}

/*
We can use pointers not only to the base objects but also to the objects of derived classes. Pointers of objects of a base class are type compatible
with pointers to object of a derived class.Therefore, a single pointer variable can be made to point to objects belonging to different classes.
Consider the above class hierarchy where A is a base class and B is derived class from A and C is derived class from B.Then a pointer declared as
a pointer to A can also be a pointer to B and a pointer to C.
-->Consider the following declarations:
1) A *aptr -> pointer to class A
2) A obja  -> object of A
3) aptr=&obja ->aptr is pointer of A points To object of A
4) B objb;     ->object of B
5) aptr=&objb   ->(pointer of A points to object of B. ) This assignment is perfeclty vaild with cpp because because objb is an object
derived from class A. However there is a problem in aptr to access public members of class B .
Using aptr we can access only those members which are inherited from A and not the members that origannly belonging to B.
In case member of B has same name as one of the members of A(overriding) then any reference to that member by that aptr will always acses the base
class member.
    Although cpp permits the base pointer to point to any object derived from that base, the pointer cannot be direclty used to acses all the
    members of that derived class.We may have to use another pointer declared as a pointer to derived class
*/