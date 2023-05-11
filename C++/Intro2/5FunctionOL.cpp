// Function Overloading
/*Overloading referes to the use of  the same thing for different purposes. C++ also permits overloading of
functions, this means that we can use the same function name to create function that perform a varity of different
task this is known as funciton polymorphism in OOP. Using the concept of funciton overloading we can design a family
of functions with one function name but with different agrument list. The funciton would perform different operations
depending on the argument list in the function call. The correct function to be involked is determined by checking the
number and type of the arguments but not on the function type. */

/*A funciton call first matches the prototype having the same number and type of arguments. And then calls the function
for execution. A best match must be unique. The function selection involves following steps-
    1)The compiler first tries to find an exact match in which the type of actual arguments are the same and use that
    function.
    2)If an exact match is not found the compiler uses the integral promotion to the actual arguments such as
        a.char to int
        b.float to double
        c.when either of them fails the compiler tries to use the built in conversions to the actual arguments and
        then uses the function whose match is unique. If the conversion is possible to have multiple matches then the
        compiler will generate an error message.
        void display(long);
        void display(double);
        and a function call
        display(10);
        will cause ana error because int argument can be converted to either long or double there by creating an
        ambigious situation as to which version of display should be used
        d.If all of the steps fail, then the compiler will try the user define conversions in combination with integral
        promotions and built-in conversions to find a unique match.*/

/*Overloading of function should be done with caustion. We should not overload unrealated functions. Sometimes default
arguments may be used instead of overloading. This may reduce number of funcitons to be defined.*/

#include <iostream>
using namespace std;

void display(int n = 10)
{
    cout << "\nData:" << n;
}
void display(double d)
{
    cout << "\nData:" << d;
}

int main(int argc, char const *argv[])
{
    display(15);
    display();
    display('A');
    display(9.2);
    return 0;
}
