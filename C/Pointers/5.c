#include<stdio.h>
void main()
{
    int x[5],i=0,j=0;
    void input(int*);
    void swap(int*,int*);
    void display(int);
    for(i=0;i<5;i++)
    {
        input(&x[i]);
    }
    for(i=0;i<5;i++)
    {
        display(x[i]);
    }
    printf("\n");
    for(i=0,j=4;i<j;i++,j--)
    {
        swap(&x[i],&x[j]);
    }
    for(i=0;i<5;i++)
    {
        display(x[i]);
    }
    return;
}
void input(int *p)
{
    printf("\nEnter No:");
    scanf("%d",p);
}

void display(int p)
{
    printf("\n Data: %d",p);
}
void swap(int *p,int*q)
{
    int tmp=*p;
    *p=*q;
    *q=tmp;
}