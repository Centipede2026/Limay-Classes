#include <iostream>
using namespace std;

//Constructor function definition outside class

#define M 5
class Array
{
    int x[M];
public:
    Array();
    Array(int a);
    Array(Array &);
    ~Array(){}
    void set();
    void display();
    int calctot();
    int calctot()
    {
        return calctot()/M;
    }
    int isMore(Array &t)
    {
        return calctot()>t.calctot();
    }
    int isMore(int a)
    {
        return (calctot()>a);
    }
    int isLess(Array &t)
    {
        return calctot()<t.calctot();
    }
    int isless(int a)
    {
        return calctot()<a;
    }
};