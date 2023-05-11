//Function call by passing value
/*
void main()
{
    int a,b;
    void swap(int,int);
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("\nBefore Call \nA: %d \n B: %d",a,b);
    swap(&a, &b);
    printf("\n After call \nA: %d \nB: %d",a,b);032 
    return;


void swap(int p,int q)
{
    int r=p;
    p=q;
    q=r;
}
*/

//Call by reference
#include<stdio.h>

void main()
{
    int a,b;
    void swap(int *,int *);
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("\nBefore Call \nA: %d \n B: %d",a,b);
    swap(&a, &b);
    printf("\n After call \nA: %d \nB: %d",a,b);
    return;
}

void swap(int *p,int *q)
{
    int r=*p;
    *p=*q;
    *q=r;
}