//Create a header file with name slist1.h
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}NODE;

NODE*st=NULL;

//function to create NODE
NODE*createnode(int d)
{
    NODE*a;
    a=(NODE*)malloc(sizeof(NODE));
    a->data=d;
    a->next=NULL;
}

//FUNCITON TO RETRIEVE LAST node ADDRESS
NODE* getlastnode()
{
    NODE*a=st;
    while (a->next!=NULL)
        a=a->next;
    return a;
}

//function to display list data
void display()
{
    NODE*a=st;
    if (st==NULL)
        printf("\nEmpty list");
    else
    {
        printf("\n Data:\n");
        while (a!=NULL)
        {
            printf("%4d",a->data);
            a=a->next;
        }
    }
}

// function to add new node at begin 
void addbegin(int d)
{
    NODE*a=createnode(d);
    a->next=st;
    st=a;
}

//function to add new node at end
void addend(int d)
{
    NODE*a=createnode(d);
    NODE*b;
    if (st==NULL)
        st=a;
    else{
        b=getlastnode();
        b->next=a;
    }
}

//close the header file
//Create a new file, define application program that demonstrates use of function from 
//header file <stdlib.h>