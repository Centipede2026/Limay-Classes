#include <bits/stdc++.h>
using namespace std;
#define M 5

class Array
{
    int x[M];

public:
    void init();
    void setData();
    void setData(Array &);
    void display();
    int sum();
    int avg()
    {
        return sum() / M;
    }
    int search(int sv);
    int findMaxposition();
    int findMinposition();
    int findMaxvalue()
    {
        return x[findMaxposition()];
    }
    int findMinvalue()
    {
        return x[findMinposition()];
    }
    int isMore(Array &a)
    {
        return sum() > a.sum();
    }
    int isLess(Array &a)
    {
        return sum() < a.sum();
    }
};

// Function definitions
void Array::init()
{
    for (int i = 0; i < M; i++)
        x[i] = 0;
}
void Array::setData()
{
    cout << "\nData: ";
    for (int i = 0; i < M; i++)
    {
        cin >> x[i];
    }
}
void Array::setData(Array &t)
{
    for (int i = 0; i < M; i++)
    {
        x[i] = t.x[i];
    }
}
void Array::display()
{
    cout << "\nData:\n";
    for (int i = 0; i < M; i++)
        cout << " " << x[i];
}
int Array::sum()
{
    int tot = x[0];
    for (int i = 1; i < M; i++)
    {
        tot += x[i];
    }
    return tot;
}
int Array::search(int sv)
{
    int i = 0;
    while (i < M)
    {
        if (x[i] == sv)
            break;
        i++;
    }
    if (i == M)
        return 0;
    else
        return 1;
}
int Array::findMaxposition()
{
    int xpos = 0, i = 1;
    while (i < M)
    {
        if (x[i] > x[xpos])
            xpos = i;
        i++;
    }
    return xpos;
}
int Array::findMinposition()
{
    int npos = 0, i = 1;
    while (i < M)
    {
        if (x[i] < x[npos])
            npos = i;
        i++;
    }
    return npos;
}
int main()
{
    Array p, q;
    p.setData();
    p.display();
    int tot = p.sum();
    cout << "\nTotal Marks: " << tot;
    cout << "\nAverage: " << tot / M;
    q.setData();
    q.display();
    cout << "\nMin Value: " << q.findMinvalue();
    cout << "\nMax Value: " << q.findMaxvalue();
    return 0;
}