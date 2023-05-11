// Member function definition outside class
#include <bits/stdc++.h>
using namespace std;

template <class P>
class tclass
{
    P var;

public:
    void setData();
    void display();
};

template <class P>
void tclass<P>::setData()
{
    cout << "\nInput Value:";
    cin >> var;
}

template <class P>
void tclass<P>::display()
{
    cout << "\nOutput:" << var;
}

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