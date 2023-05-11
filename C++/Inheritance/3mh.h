#include <bits/stdc++.h>
#define ll long long int

using namespace std;

class Theory
{
protected:
    int s1, s2, s3;

public:
    Theory()
    {
        s1 = s2 = s3 = 0;
    }
    ~Theory() {}
    void set()
    {
        cout << "Theory Marks\n";
        cin >> s1 >> s2 >> s3;
    }
    void display()
    {
        cout << "\n Theory Marks : \n";
        cout << s1 << "\t" << s2 << "\t" << s3 << "\n";
    }
    int total()
    {
        return (s1 + s2 + s3) / 3;
    }
};


class Oral
{
protected:
    int o1, o2;

public:
    Oral()
    {
        o1 = o2 = 0;
    }
    ~Oral() {}
    void set()
    {
        cout << "Oral MArks\n";
        cin >> o1 >> o2;
    }
    void display()
    {
        cout << "\n Oral Marks : \n";
        cout << o1 << "\t" << o2 << "\n";
    }
    int total()
    {
        return o1 + o2;
    }
};

class Student : public Theory, public Oral
{
protected:
    int no;
    char nm[15];
public:
    Student():Theory(),Oral()
    {
        no=0;
        nm[0]='\0';
    }
    ~Student(){}
    void set()
    {
        cout<<"\nRoll No:";
        cin>>no;
        cout<<"\nName:";
        cin>>nm;
        Theory::set();
        Oral::set();
    }
    void display()
    {
        cout<<"\nRoll No:"<<no;
        cout<<"\nName:"<<nm;
        Theory::display();
        cout<<"\nTotal:"<<Theory::total();
        Oral::display();
        cout<<"\n0 Total:"<<Oral::total();
    }
};

class Result:public Student
{
protected:
    int tmrk;
    int omrk;
public:
    Result():Student()
    {
        tmrk=0;
        omrk=0;
    }
    ~Result(){}
    void set()
    {
        Student::set();
        tmrk=Theory::total();
        omrk=Oral::total();
    }

    void display()
    {
        Student::display();
        cout<<"\nTotal:"<<tmrk+omrk;
    }
};

int main()
{
    Student s;
    s.set();
    s.display();
   
    Result r;
    r.set();
    r.display();

     return 0;
}