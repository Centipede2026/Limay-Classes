//Program to read a text file

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("abc.txt");  //object creation
    char ch;
    cout<<"\nType Characters\n";
    while(1)
    {
        in>>ch;  //reads a character from file
        if(in.eof())   //end of file function
            break;
        cout<<ch<<" ";
    }
    in.close();
}