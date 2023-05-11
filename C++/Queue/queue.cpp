//Implementation of class queue using array

#include <iostream>
#define M 5
using namespace std;

class Queue
{
    int fr,rr;
    int arr[M];
public:
    Queue()
    {
        fr=0;
        rr=-1;
    }
    ~Queue(){}
    void insert(int);
    void remque();
    void display();
    int isEmpty()
    {
        return rr<fr;
    }
    int isFull()
    {
        return(rr==M-1);
    }
    void menu();
};

void Queue::insert(int d)
{
    if (isFull())
    {
        cout<<"\nOverflow";
    }
    else{
        rr++;
        arr[rr]=d;
    }
}

void Queue::remque()
{
    if (isEmpty())
    {
        cout<<"\nUnderflow";
    }
    else{
        fr++;
    }
}

void Queue::display()
{
    if(isEmpty())
        cout<<"\nEmpty Queue";
    else
    {
        cout<<"\nQueue Data: ";
        for (int i = fr; i <= rr; i++)
        {
            cout<<" "<<arr[i];
        }
    }
}

void Queue::menu()
{
    int opt,data;
    while (1)
    {
        cout<<"\nStack Menu\n1.push\n2.pop\n3.dispaly\n4.Exit\noption:";
        cin>>opt;
        if(opt>3)
            break;
        switch(opt)
        {
            case 1:
                cout<<"\nData:";
                cin>>data;
                insert(data);
                break;
            case 2:
                remque();
                break;
            case 3:
                display();
        }
    }
}

int main()
{
    Queue a;
    a.menu();
    return 0;
}