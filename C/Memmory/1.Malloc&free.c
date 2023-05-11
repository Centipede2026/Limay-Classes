//program to demonstrate use of malloc() and free() function.

#include<stdio.h>

void main()
{
    int *ptr;
    int n,i=0;
    printf("\nInformation Count:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));  //memory allocation
    printf("\nEnter Data\n");
    while(i<n)                         //input
    {
        scanf("%d",(ptr+i));
        i++;
    }
    printf("\nData\n");                //output
    for ( i = 0; i < n; i++)
    {
        printf("%4d",*(ptr+i));
        free(ptr);
    }
    return;
}