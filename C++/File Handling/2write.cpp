//Program to create a text file

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("abc.txt");  //object creation
    char ch;
    cout<<"\nType Characters\n";
    while(1)
    {
        cin>>ch;
        if(ch=='#')
            break;
        out<<ch<<"\n";
    }
    out.close();
}