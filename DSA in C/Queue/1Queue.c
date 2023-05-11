#include<stdio.h>
#define M 5

typedef struct Queue
{
    int fr,rr;
    int arr[M];
}QUE;

void init(QUE*t)
{
    t->rr=-1;
    t->fr=0;
}

int isEmpty(QUE *t)
{
    return (t->rr < t->fr);
}

int isFull(QUE *t)
{
    return(t->rr==M-1);
}

void insert(QUE *t,int d)
{
    if (isFull(t))
    {
        /* code */
        printf("\nOverflow");
        return;
    }
    t->rr++;
    t->arr[t->rr]=d;    
}

void remque(QUE *t)
{
    if(isEmpty(t))
    {
        printf("\nUnderflow");
        return;
    }
    t->fr++;
}

void display(QUE*t)
{
    int i=t->fr;
    if (isEmpty(t))
        printf("\nEmpty Queue");
    else
    {
        printf("\nData\n");
        while (i<=t->rr)
        {
            printf("%4d",t->arr[i]);
            i++;
        }
    }
}

int main()
{
    QUE p;
    int opt,d;
    init(&p);
    while (1)
    {
        printf("\nQueue Menu\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:");
        scanf("%d",&opt);
        if (opt>3)
            break;
        switch(opt)
        {
            case 1:
                printf("\nData\n");
                scanf("%d",&d);
                insert(&p,d);
                break;
            case 2:
                remque(&p);
                break;
            case 3:
                display(&p);
        }
    }
    return 0;
}
