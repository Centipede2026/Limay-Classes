//Program to create a text file containing numbers

#include<iostream>
#include<fstream>
using namespace std;

void readf()
{
    int no;
    ifstream nin("number.txt");
    while(1)
    {    
        nin>>no;
        if(nin.eof())
            break;
        cout<<no<<" ";
    }
    nin.close();
}

int main()
{
    ofstream nout("number.txt");
    int no;
    while(1)
    {
        cout<<"\nEnter Number:";
        cin>>no;
        if (no==0)
            break;
        nout<<no<<" ";
    }
    nout.close();

    readf();
    return 0;
}