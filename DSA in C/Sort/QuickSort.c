//*___________________________________________-QUICK SORT-______________________________________________________*//


#include <stdio.h>
#include <stdlib.h>

#define M 10

void input(int *a)
{
    int i = 0;
    printf("\nEnter Data:\n");
    while (i < M)
    {
        scanf("%d", a + i);
        i++;
    }
}

void display(int *a, int flg)
{
    int i = 0;
    if (flg == 0)
        printf("\nBefore Search");
    else
        printf("\nAfter Search");
    while (i < M)
    {
        printf("\n%4d", *(a + i));
        i++;
    }
}

void swap(int *p,int *q)
{
    int r=*p;
    *p=*q;
    *q=r;
}

void pivot(int *a,int l,int r)
{
    if(*(a+l) > *(a+r))
        swap(a+l,a+r);
}

int partition(int *a,int l,int r)
{
    int i=l,j=r,k;
    pivot(a,l,r);
    k=a[l];
    do
    {
        do ++i; while (a[i]<j);
        do --j; while (a[j]>k);
        if(i<j)
            swap(a+i,a+j);
    } while (i<j);
    swap(a+l,a+j);
    return j;
}

void quick(int *a, int l, int r)
{
    int k;
    if(l<r)
    {
        k=partition(a,l,r);
        quick(a,l,k-1);
        quick(a,k+1,r);
    }
}

int main()
{
    int x[M];
    input(x);
    display(x,0);
    quick(x,0,M-1);
    display(x,1);
    return 0;
}

