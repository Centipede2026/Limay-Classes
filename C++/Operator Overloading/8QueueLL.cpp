#include<bits/stdc++.h>
using namespace std;

#include "6node.h"

class Queue
{
    Node*fr;
    Node*rr;
public:
    Queue()
    {
        fr=rr=NULL;
    }
    ~Queue();

    void insert(int d)
    {
        Node *a=new Node(d);
        if (fr==NULL)
            fr=a;
        else
        {
            rr->setNext(a);
        }
        rr=a;
    }

    int isEmpty()
    {
        return (rr==NULL);
    }

    void remque()
    {
        Node*a=fr;
        fr=fr->getNext();
        if (fr==NULL)
            rr=NULL;
        delete a;
    }

    void display();
    void menu();
};

Queue::~Queue()
{
    while (!isEmpty())
    {
        remque();
    }
}

void Queue::display()
{
    Node*a=fr;
    if(isEmpty())
        cout<<"\nEmpty Queue";
    else
    {
        cout<<"\nData:\n";
        while (a!=NULL)
        {
            cout<<" "<<a->getData();
            a=a->getNext();
        }
    }
}

void Queue::menu()
{

    int opt,d;
    while(1)
    {
        cout<<"\nQueue Menu\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:";
        cin>>opt;
        if (opt>3)
            break;
        switch(opt)
        {
            case 1:
                cout<<"\nData:";
                cin>>d;
                insert(d);
                break;
            case 2:
                if(isEmpty())
                    cout<<"\nUnderflow";
                else
                    remque();
                break;
            case 3:
                display();
        }
    }
}

int main()
{
    Queue p;
    p.menu();
    return 0;
}