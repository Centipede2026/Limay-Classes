//reference variable
// syntax:   <data_type> & <rep_variable>=<variable>;

#include<iostream>
using namespace std;
void main()
{
    int a=10;
    int &b=a;
    cout<<"\nA:"<<a;
    a+=5;
    cout<<"\nA:"<<b;
    b/=2;
    cout<<"\nA:"<<a;
    return;
}

/* c++ introduces a new kind of variable known as the reference variable. A reference variable provides an 
allias name for a previously defined variable. A reference variable must be initialised at the time of declaration.
this establishes the correspondance between the reference and the data object which it names. It is important to note
that the initialisation of reference variable is completely different from assignment to it.
C++ assignes additional meaning to the symbol '&', here is not an address operator. The notation 'int &' means 
reference to int. A major application of reference variable is in passing arguments to functions. Such function call
are known as call by reference. The call by reference mechanism is useful in object oriented programming because it 
permits the manipulation of objects by reference and eliminated the coping of object parameters back and forth. It 
is also important to note that references can be created not only for build-in data types but also for user-defined 
data types such as structures and classes. */