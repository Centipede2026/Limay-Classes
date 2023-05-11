//Create a header file with name node.h

#include <iostream>
using namespace std;

class Node
{
    int data;
    Node*next;
public:
    Node(){
        data=0;
        next=NULL;
    }
    Node(int d)
    {
        data=d;
        next=NULL;
    }
    Node(int d,Node*t)
    {
        data=d;
        next=t;
    }
    int getData(){return data;}
    Node*getNext(){return next;}
    void setNull(){next=NULL;}
    ~Node(){}

    void setData(int d)
    {
        data=d;
    }
    void setNext(Node *t)
    {
        next=t;
    }
};