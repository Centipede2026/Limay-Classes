//call by reference
#include<iostream>
using namespace std;

void swap(int &p, int &q)
{
    int r=p;
    p=q;
    q=r;
}

int main()
{
    cout<<"\nEnter 2 nos.";
    int a,b;
    cin>>a>>b;
    cout<<"\nA:"<<a<<"\nB:"<<b;
    swap(a,b);  //call by passing value
    cout<<"\nA:"<<a<<"\nB:"<<b;
    return 0;
}