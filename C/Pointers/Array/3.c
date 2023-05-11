//Create a new file and define functions to manupulate integer array, store this content with name,iarray.h
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x[5];
    void input(int *,int);
    void display(int *,int);
    int calctot(int*a,int n);
    int calcavg(int *a,int n);
    input(x,5);
    calctot(x,5);
    calcavg(x,5);
    display(x,5);
    return 0;
}

//function to update array data
void input(int*a,int n)
{
    int i=0;
    printf("\n Data:\n ");
    while(i<n)
    {
        scanf("%d",(a+i));
        i++;
    }
}

//fucntion to compute data sum
int calctot(int*a,int n)
{
    int i=1,tot=*(a+i);
    while (i<n)
    {
        tot+=*(a+i);
        i++;
    }
    return tot;    
}

//function to display array data
void display(int*b,int n)
{
    int i=0;
    printf("\n Data:\n ");
    while(i<n)
    {
        printf("%4d",*(b+i));
        i++;
    }
}

//funciton to compute average
int calcavg(int *a,int n)
{
    return calctot(a,n)/n;
}

//function to search an element in an array,return -1 if not found.

int search(int *a,int n,int sv)
{
    int i=0;
    while(i<n)
    {
        if(*(a+i)==0)
        {
            break;
        }
        i++;
    }
    return(i==n)?-1:i;
}

//find and replace
void findrep(int *b,int su,int ru,int n)
{
    int i=0;
    while(i<n)
    {
        if(*(b+i)==su)
            *(b+i)=ru;
        i++;
    }
}

//#include "iarray.h"

void main()
{
    int x[10],res,opt;
    while (1)
    {
        printf("/nMenu\n 1.input\n 2.display\n 3.Total\n 4.Avg\n 5.Search\n 6.FInd Rep\n 7.Exit\n Option");
        scanf("%d",&opt);
        if (opt>)
        {
            /* code */
        }
        switch(opt)
        {
            case 1:
                input()
            case 2:
            case 3:
                printf("\nTotal:%d",calctot(x,10));
                break;
            case 4:
                printf("\nAvg:%d",calcavg(x,10));
                break;
            case 5:
                printf("\nSearch Vlue");
                break;
            case 6:
                printf("\nSearch:");
                scanf("%d",&su);
                printf("\nReplace:");
                scanf("%d",&ru);
                findrep(x,su,ru,10);


        }
    }
    
}