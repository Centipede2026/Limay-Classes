#include <fstream>
#include <iostream>
//#include <process.h>

using namespace std;

int main()
{
    ifstream file1;
    ofstream file2;
    char sfile[13], tfile[13];
    cout << "\nEnter Source file name:";
    cin >> sfile;
    cout << "\nEnter Target file name:";
    cin >> tfile;

    file2.open(sfile);
    file2 << "\nMy Name is VIJAY KUMAR" << endl;
    file2.close();
    file1.open(sfile);
    file2.open(tfile);

    if (!file1)
    {
        cerr << " Some Error..";
        exit(1);
    }

    char varch, p = file1.get();

    while (!file1.eof())

    {
        file2.put(p);

        varch = file1.get();

        if (p == ' ' && varch == ' ')
        {
            p = varch;
            varch = file1.get();
        }
        p = varch;
    }

    cout << "\ncopied......";
    file1.close();
    file2.close();
    cout << "\nTarget File Contents....\n";
    file1.open(tfile);

    while (!file1.eof())
    {
        file1.get(varch);
        cout << varch;
    }

    file1.close();
}