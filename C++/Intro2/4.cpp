//C++ type Function call with default arguments
#include<iostream>
using namespace std;
/*
void repli(char ch,int n=5)
{
    for (int i=0;i<n; i++)
    {
        cout<<ch;
    }
    return;
}

int main()
{
    repli('A');
    printf("\n");
    repli('5',4);
    return 0;
}
*/

//C types funciton call with default arguments

int main()
{
    void repli(char ch,int n=5);
    repli('A');
    printf("\n");
    repli('>',6);
    return 0;
}

void repli(char ch,int a)
{
    cout<<"\nOutput\n";
    for (int i=0;i<a; i++)
    {
        cout<<ch;
    }
    return;
}

/*C++ allows us to call a funciton without specifing all its arguments, in such cases the funciton assigns a defaults
values to the parameter, which does not have the maching argument in the function call. Default values are specified 
when the function is declared. The compiler looks at the prototype to see how many arguments a function uses and 
alerts the program for possible default values. The default value is specified in a manner syntatically similar to a 
variable initialization */

/*A default argument is checked for type at the time of declaration and evaluated at the time of call.One important 
point to note is that, Only the trailing arguments can have values and therefore we must add defaults from right to 
left, we can not provide default value to a perticular argument in the middle of the argument list. Default arguments
are useful in situations where some arguments always have the same value.*/

/*
Advantages-
1)We can use default arguments to add new parameters to the existing functions.
2)Default arguments can be used to combine similar functions into one.
*/