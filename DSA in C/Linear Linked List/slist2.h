//Function to create node

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node*next;
}NODE;

NODE*createnode(int d)
{
    NODE*a;
    a=(NODE*)malloc(sizeof(NODE));
    a->data=d;
    a->next=NULL;
}

NODE* getlastnode(NODE**t)
{
    NODE*a=*t;
    while (a->next!=NULL)
        a=a->next;
    return;    
}

NODE* addend(NODE**t,int d)
{

    NODE*a=createnode(d);
    NODE*b=createnode(d);
    if (*t==NULL)
        *t=a;
    else{
        b=getlastnode(t);
        b->next=a;
    }
}

void display(NODE **t)
{
    NODE*a=*t;
    if(*t==NULL)
        printf("Empty List");
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

void addbeg(NODE **t,int d)
{
    NODE *a=createnode(d);
    a->next=*t;
    *t=a;
}

void main()
{
    NODE *st=NULL;
    addend(&st,10);
    addend(&st,20);
    addend(&st,30);
}