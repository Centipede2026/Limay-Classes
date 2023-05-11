//Inline funciton

/*One of the objectives of using functions in a program is to save some memory space, which becomes appriciable when 
a function is likely to be called many times. However evertime a function is called it takes a lot of extra time in
execting a series of instructions for tasks such as jumping to the sunction, saving resistors, pushing arguments into
the stack and returning to the calling funciton. When a funciton is small a substantial percent of execution time
may be spend in such overheads */

/*Solution to this problem is to use macro-definitions, the major drawback with macros is that they are not really 
functions and therefore the usual error checking does not occur during compilation */

/*C++ has a different solution to this problem. To eliminate the cost of calls to small funciton, C++ proposes a new
feature called in-line functions. An in-line function is a function that is expanded in length when it is invoked
i.e. the compiler replaces the funciton call with corresponding function code */

//THe In-line function are defined as follows:

// inline<function_header>
// {
//     ___;
//     ___;
// }

/*NOTE that the inline keyword send a request not a command to the compiler, the compiler may ignore this request if
the funciton definition is to long or to complicated and compile the function as a normal function.*/

/*Following are some of the situations where inline expansion may not work are-
1)For funcitons returning values if a loop, switch or goto exists.
2)For funcitons not returning values if a return statement exists.
3)If function contains static variables.
4)If inline functions are recursive.
*/
#include<iostream>
using namespace std;

inline int sqr(int n)
{
    return n*n;
}
inline int cube(int n)
{
    return n*n*n;
}
int main()
{
    cout<<"\nEnter no.";
    int a;
    cin>>a;
    cout<<"\nNo:"<<a;
    cout<<"\nSqr:"<<sqr(a);
    cout<<"\nCube:"<<cube(a);
    return 0;
}
