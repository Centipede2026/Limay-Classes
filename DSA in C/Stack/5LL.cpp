//Linked List Implementation

#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node*next;
}NODE;

typedef struct stack
{
    NODE *top;
}STK;

void init(STK*t)
{
    t->top=NULL;
}

void push(STK*t,int d)
{
    NODE*a=(NODE *)malloc(sizeof(NODE));
    a->data=d;
    a->next=t->top;
    t->top=a;
}

void pop(STK*t)
{
    NODE*a=t->top;
    if (t->top==NULL)
        printf("\nUnderflow");
    else
    {
        t->top=a->next;
        free(a);
    }
}

void display(STK *t)
{
    NODE*a=t->top;
    if(t->top==NULL)
        printf("\nEmpty Stack");
    else    
    {
        printf("\nData\n");
        while(a!=NULL)
        {   
            printf("%4d",a->data);
            a=a->next;
        }
    }
}

int main()
{
    int opt,d;
    STK p;
    init(&p);
    while (1)
    {
        printf("\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:");
        scanf("%d",&opt);
        if (opt>3)
        {
            break;
        }
        switch(opt)
        {
            case 1:
                printf("\nEnter Data:");
                scanf("%d",&d);
                push(&p,d);
                break;
            case 2:
                pop(&p);
                break;
            case 3:
                display(&p);
                break;
        }
    }
    return 0;
}
