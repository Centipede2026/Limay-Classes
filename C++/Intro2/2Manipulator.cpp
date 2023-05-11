#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=4;
    int b=44;
    int c=1234;

    cout<<"the value of a"<<setw(4)<<a;
    cout<<"the value of b"<<setw(4)<<b;
    cout<<"the  value of c"<<setw(4)<<c;

    cout<<"the value of a without setw"<<a;
    cout<<"the value of b without setw"<<b;
    cout<<"the value of c without setw"<<c;

    return 0;
}