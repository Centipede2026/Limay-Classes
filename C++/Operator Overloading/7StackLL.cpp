#include <iostream>
#include "6node.h"
using namespace std;

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    ~Stack();

    void push(int d)
    {
        top = new Node(d, top);
    }

    void pop()
    {
        Node *a = top;
        top = top->getNext();
        delete a;
    }

    int isEmpty()
    {
        return(top==NULL);
    }

    void display();
    void menu();
};

Stack::~Stack()
{
    while (!isEmpty())
        pop();
}

void Stack::display()
{
    Node *a=top;
    if (top==NULL)
        cout<<"\nEmpty Stack";
    else
    {
        cout<<"\nStack Data\n";
        while(a!=NULL)
        {
            cout<<" "<<a->getData();
            a=a->getNext();
        }
    }
}

void Stack::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nStack Menu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:";
        cin>>opt;
        if (opt>3)
            break;
        switch(opt)
        {
            case 1:
                cout<<"\nData:";
                cin>>d;
                push(d);
                break;
            case 2:
                if (isEmpty()==1)
                    cout<<"\nUnderflow";
                else
                    pop();
                break;
            case 3:
                display();
        }
    }
}

int main()
{
    Stack s;
    s.menu();
    return 0;
}