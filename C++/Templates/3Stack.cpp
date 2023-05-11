// Implementation of stack

#include <bits/stdc++.h>
using namespace std;
#define M 5

template <class P>
class Stack
{
    P arr[M];
    int top;

public:
    Stack() { top = -1; }
    ~Stack() {}

    void push(P &x)
    {
        if (top == M - 1)
            cout << "Overflow";
        else
            arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "\nUnderflow";
        else
            top--;
    }

    void display();
    void menu();
};

template <class P>
void Stack<P>::display()
{
    if (top == -1)
        cout << "\nEmpty Stack";
    else
    {
        cout << "\nStack Data\n";
        for (int i = top; i >= 0; i--)
            cout << " " << arr[i];
    }
}

template <class P>
void Stack<P>::menu()
{
    int opt;
    P data;
    while (1)
    {
        cout << "\nStack Menu"
             << "\n1.Push"
             << "\n2.Pop"
             << "\n3.Display"
             << "\n4.Exit"
             << "\nOption:";
        cin >> opt;
        if (opt > 3)
            break;
        switch (opt)
        {
        case 1:
            cout << "\nData:";
            cin >> data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
        }
    }
}

int main()
{
    Stack<int> p;
    p.menu();
    Stack<double> q;
    q.menu();
    return 0;
}