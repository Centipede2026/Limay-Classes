//Copy source file abc.txt with new name pqr.txt

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("abc.txt");
    if(!in)
    {
        cout<<"\nFile Not Found";
        return;
    }
    ofstream out("pqr.txt");
    char ch;
    while (1)
    {
        in >> ch; //reads a character
        if (in.eof())
            break;
        out<<ch; //write a character
    }
    in.close();
    out.close();
    return 0;
}