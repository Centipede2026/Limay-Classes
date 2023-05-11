#include <bits/stdc++.h>
using namespace std;

template <class P>
class tclass
{
    P var;

public:
    void setData()
    {
        cout << "\nInput Value:";
        cin >> var;
    }
    void display()
    {
        cout << "\nOutput:" << var;
    }
};

int main()
{
    tclass<int> a;
    a.setData();
    a.display();
    tclass<double> b;
    b.setData();
    b.display();
    return 0;
}