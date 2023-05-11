//WAP to display first 10 fibonacci series numbers
#include<stdio.h>

void main()
{
    void fiboseries();
    fiboseries();
    return;
}

void fiboseries()
{
    int i=1,a=-1,b=1,c;
    printf("\nFiboSeries\n");
    while(i<=10)
    {
        c=a+b;
        printf("%4d",c);
        a=b;
        b=c;
        i++;
    }
    return;
}