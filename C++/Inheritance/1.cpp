//Single inheritance with public derivation
#include <iostream>
using namespace std;

class Student
{
    int no;
    char nm[15];

public:
    void setData()
    {
        cout << "\nRoll no:";
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
class Marks : public Student
{
    int mrk;

public:
    void setMarks()
    {
        cout << "\nEnter marks";
        cin >> mrk;
    }
    void displayMarks()
    {
        cout << "\nMarks:" << mrk;
    }
    int getMarks() { return mrk; }
};
int main()
{
    Student s;
    s.setData();
    s.display();
    Marks m;
    m.setData();
    m.setMarks();
    m.display();
    m.displayMarks();
    return 0;
}