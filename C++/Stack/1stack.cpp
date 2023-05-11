#define M 5
#include <iostream>
using namespace std;

class Stack
{
    int top;
    int arr[M];

public:
    Stack()
    {
        top = -1;
    }
    ~Stack() {}

    void push(int d)
    {
        if (top == M - 1)
        {
            arr[++top] = d;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\nUnderflow";
        }
        else
        {
            top--;
        }
    }

    void display();
    void menu();
};

void Stack::display()
{
    if (top == -1)
        cout << "\nEmpty Stack";
    else
    {
        cout << "\nStack Data\n";
        for (int i = 0; i >= 0; i--)
        {
            cout << " " << arr[i];
        }
    }
}

void Stack::menu()
{
    int opt, d;
    while (1)
    {
        cout << "\nStack Menu\n1.push\n2.pop\n3.dispaly\n4.Exit\noption:";
        cin >> opt;
        if (opt > 3)
            break;
        switch (opt)
        {
        case 1:
            cout << "\nData:";
            cin >> d;
            push(d);
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
    Stack a;
    a.menu();
    return 0;
}

