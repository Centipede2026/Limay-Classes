//Program to create a text file containing Student Records

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

//program to read the text file "stu.txt"

void readfile()
{
    ifstream sin("stu.txt");
    if(!sin)  //file not found
        return;
    int no;
    char nm[15];
    double mrk;
    cout<<"\nStudent Data\n";
    while(1)
    {
        sin>>no>>nm>>mrk;
        if(sin.eof())
            break;
        cout<<setw(4)<<no<<" "<<setw(15)<<setiosflags(ios::left)<<nm<<resetiosflags(ios::left)<<" "<<setw(6)<<setprecision(2)<<mrk<<"\n";
    }
    sin.close();
    return;
}

int main()
{
    ofstream sout("stu.txt");
    int no;
    char nm[15];
    double mrk;
    while(1)
    {
        cout<<"\nRoll No:";
        cin>>no;
        if(no==0)
            break;
        cout<<"\nName:";
        cin>>nm;
        cout<<"\nMarks:";
        cin>>mrk;
        sout<<no<<") "<<nm<<" "<<mrk<<"\n";
    }
    readfile();
    sout.close();
    return 0;
}

