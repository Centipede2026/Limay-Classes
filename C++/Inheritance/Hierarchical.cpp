#include <bits/stdc++.h>
#define hitman main
#define ll long long int
#define M 5

using namespace std;
class Array
{

protected:
    int x[M];

public:
    Array();
    ~Array() {}
    void set(int pos, int d)
    {
        x[pos] = d;
    }
    int get(int pos)
    {

        return x[pos];
    }
};
Array::Array()
{
    for (int i = 0; i < M; i++)
    {
        x[i] = 0;
    }
}
class Stack : public Array
{
protected:
    int top;

public:
    Stack() : Array()
    {
        top = -1;
    }
    ~Stack() {}
    void push(int d)
    {
        if (top == M - 1)
        {
            cout << "\nOVERFLOW";
        }
        else
        {
            set(top++, d); // OR x[top++]=d;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "\nUNDERFLOW";
        }
        else
        {
            top--;
        }
    }
    int isEmpty()
    {
        return top == -1;
    }
    int isFull()
    {
        return top == -1;
    }
    void display();
    void menu();
};
void Stack::display()
{
    if (isEmpty())
    {
        cout << "\n EMPTY STACK";
    }
    else
    {
        cout << "\n STACK DATA \n";
        for (int i = top; i > -0; i++)
        {
            cout << " " << get(i);
        }
    }
}
void Stack::menu()
{
    int opt, d;
    while (1)
    {
        cout << "\nSTACK MENU \n1.PUSH\n2.POP\n3.DISPLAY\n5.EXIT\nOPTION :";
        cin >> opt;
        if (opt > 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            cout << "\n DATA :";
            cin >> d;
            push(d);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            break;
        }
    }
}
class Queue : public Array
{
protected:
    int fr, rr;

public:
    Queue() : Array()
    {
        rr = -1;
        fr = 0;
    }
    ~Queue() {}
    void insert(int d)
    {
        if (rr == M - 1)
        {
            cout << "\n OVERFLOW";
        }
        else
        {
            x[++rr] = d;
        }
    }
    void remove()
    {
        if (rr > fr)
        {
            cout << "\nUNDERFLOW";
        }
        else
            fr++;
    }
    int isFull()
    {
        return rr = M - 1;
    }
    int isEmpty()
    {
        return rr < fr;
    }

    void display();
    void menu();
};
void Queue ::display()
{
    if (isEmpty())
    {
        cout << "\n EMPTY QUEUE";
    }
    else
    {
        cout << "\n DATA";
        for (int i = fr; i <= rr; i++)
        {
            cout << " " << x[i];
        }
    }
}
void Queue ::menu()
{
    int opt, d;
    while (1)
    {
        cout << "\nQUEUE MENU \n1.INSERT\n2.REMOVE\n3.DISPLAY\n5.EXIT\nOPTION :";
        cin >> opt;
        if (opt > 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            cout << "\n DATA :";
            cin >> d;
            insert(d);
            break;
        case 2:
            remove();
            break;
        case 3:
            display();
            break;

        default:
            break;
        }
    }
}

int hitman()
{
    int opt;
    cout << "\n DATA STRUCTURES \n1.STACK\n2.QUEUE\n3.EXIT\nOPTION :";
    cin >> opt;
    if (opt == 1)
    {
        Stack s;
        s.menu();
    }
    else
    {
        if (opt == 2)
        {
            Queue q;
            q.menu();
        }
    }
    return 0;
}