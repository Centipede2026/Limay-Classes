// Single inheritance with private derivation
#include <iostream>
using namespace std;

class Student
{
    int no;
    char nm[15];

public:
    void setData()
    {
        cout << "\nNo:";
        cin >> no;
        cout << "\nName:";
        cin >> nm;
    }
    void display()
    {
        cout << "\nRoll no:" << no << "\nName:" << nm;
    }
    int getNO() { return no; }
    char *getName() { return nm; }
};

class Marks : private Student
{
    int mrk;
public:
    void setMarks()
    {
        cout << "\nMarks:";
        cin >> mrk;
    }
    void displayMarks()
    {
        cout << "\nMarks:" << mrk;
    }
    int getMarks()
    {
        return mrk;
    }

    // to access private members
    void input()
    {
        setData();
    }
    void output()
    {
        display();
    }
};

int main()
{
    // Student s;
    // s.setData();
    // s.display();
    Marks m;
    m.input();
    m.setMarks();
    m.output();
    m.displayMarks();
    return 0;
}

/*
class Marks:private Student
{
    int mrk;
public:
    void setMarks()
    {
        setData();
        cout<<"\nMarks:";
        cin>>mrk;
    }
    void displayMarks()
    {
        display();
        cout<<"\nMarks:"<<mrk;
    }
    int getMarks(){return mrk;}

    int main()
{
    Marks m;
    m.setMarks();
    m.displayMarks();
    return 0;
}
*/