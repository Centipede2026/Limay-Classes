//___________________________________ARRAY IMPLEMENTATION OF STACK_________________________________________________//
#include<stdio.h>
#define M 5
typedef struct stack
{
    int top;
    int arr[M];
}STK;

void init(STK*t)
{
    t->top=-1;
}

//function to check STK is Empty
int isEmpty(STK *t)
{
    return(t->top==-1);
}

//function to cehck STK is FULL
int isFull(STK*t)
{
    return (t->top==M-1);
}

//Push
void push(STK *t,int d)
{
    if(isFull(t))
    {
        printf("\nOverflow");
        return;
    }
    t->top++;
    t->arr[t->top]=d;
}

void pop(STK*t)
{
    if(isEmpty(t))
    {
        printf("\nUnderflow");
        return;
    }
    t->top--;
}

void display(STK *t)
{
    int i=t->top;
    if (isEmpty(t))
    {
        printf("\nEmpty Stack");
    }
    else
    {
        printf("\nStack Data\n");
        while (i>0)
        {
            printf("%4d",t->arr[i--]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int d,opt;
    STK p;
    init(&p);
    while(1)
    {
        printf("\nStack Menu\n1.push\n2.pop\n3.Display\n4.Exit\nOption: ");
        scanf("%d",&opt);
        if (opt>3)
            break;
        switch (opt)
        {
        case 1:
            printf("\nData:");
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