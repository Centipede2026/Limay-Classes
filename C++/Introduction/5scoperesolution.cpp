/*Scope resolution operator "::"
  C++ is a block structured language. Blocks and scopes can be used in constructing programs. We know that the same
  variable name can be used to have different meaning in different blocks. The scope of the variable extends from 
  the point of its declaration till the end of the block containing the declaration , A variable declared inside a 
  block is said to be local to that block. In C the global version of the variable can not be accessed from within 
  the inner block. C++ resolves this problem by introducing a new operator call "Scope resolution Operator".
  This can be used to uncover a hidden variable, it takes following form  " ::<variable_name>"
  This operator allows access to the global version of a variable. A major application of the scope resolution 
  operator is in the classes to identify the class to which a member function belongs */

#include<iostream>
using namespace std;

int x=1000;

int main(int argc, char const *argv[])
{
    int x=9;
    {
        int x=10;
        {
            int x=100;
            cout<<x<<"\t"<<::x<<"\n";
        }
        cout<<x<<"\t"<<::x<<"\n";
    }
    cout<<x<<"\t"<<::x<<"\n";
    return 0;
}
