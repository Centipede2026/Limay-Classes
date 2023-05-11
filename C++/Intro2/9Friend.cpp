/* we have been emphasising throughout that the private members can not be accessed from outside the class i.e. 
a non-member can not have access to the private data of a class. However there could be a situation where we would
like 2 classes to share a perticular function, in such situations c++ allows the common function to be made friendly
with both the classes, there by allowing the function to have access to the private data of this classes. Such a 
function need not be a member of any of these classes. */

/* To make an outside function friendly to a class, we have to simply declare the function friend of the class.
The function declaration should be precided by the keyword friend. The function is define as well in the program like
a normal c++ function. The function definition does not use either the keyword friend or the scope resoultion operator
The funciton declared with the keyword friend are known as Friend functions. A function can be declared as a Friend 
in any number of classes. A friend function although not a member function has full access rights to the private 
members of the class. */

/* Characteristics
1.It is not in the scope of the class to which it has been declared as friend.
2.Since it is not in the scope of the class it can not be called using the object of the class.
3.It can be invoked like a normal function without the help of any object.
4.Unlike member functions it can not accesses the member names directly and has to use an object name with 
membership.operator with each member name.
5.It can be declared either in the public or the private part of the class without affecting it's meaning.
6.Usually it has object as an aguments*/

//A regular function friend to the class

#include <iostream>
using namespace std;
class Number
{
    int no;
public:
    void set()
    {
       cout<<"\nEnter No: ";
       cin>>no;
    }
    void display()
    {   
        cout<<"\nNo: "<<no;
    }
    friend void update(Number &, int);
};

void update(Number &t, int d)
{
    t.no=t.no+d;
}

int main(int argc, char const *argv[])
{
    Number a;
    a.set();
    a.display();
    update(a,5);
    a.display();
    return 0;
}

