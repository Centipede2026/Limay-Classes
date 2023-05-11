//Functions returning pointers

#include<stdio.h>

void main()
{
    int *ptr,n;
    int * allocate(int);
    void input(int*,int);
    void display(int*,int);
    int sum(int*,int);
    printf("\nInformation Count:");
    scanf("%d",&n);
    ptr=allocate(n);
    input(ptr,n);
    display(ptr,n);
    printf("\nData Sum: %d",sum(ptr,n));
    free(ptr);
    return;
}

int * allocate(int n)
{
    return(int *)malloc(n*sizeof(int));
}

void input(int *a,int n)
{
    int i=0;
    printf("\nEnter Data\n");
    while(i<n)                         //input
    {
        scanf("%d",(a+i));
        i++;
    }
}

void display(int *b,int n)
{
    int i=0;
    printf("\nDisplay\n");   
    while (i<n)
    {
        printf("%4d",*(b+i));
        i++;
    }
    return;
}

int sum(int *b,int n)
{
    int tot=b[0],i=1;
    while(i<n)
        tot+=b[i++];
    return tot;
}