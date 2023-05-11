/*WAP to display 1D array
#include<stdio.h>
int main()
{
    int x[5];
    int i=0;
    printf("\nArray Data\n");
    while(i<5)
    {
        scanf("%d",(x+i));
        i++;
    }
    printf("\nData\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d",*(x+i));
    }
    
    return 0;
}*/

//Program to update and display array using pointers
/*
#include<stdio.h>
int main()
{
    int x[5];
    int i=0,*a;
    a=x;
    printf("\nArray Data\n");
    while(i<5)
    {
        scanf("%d",(a+i));
        i++;
    }
    printf("\nData\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d",*(a+i));
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x[5];
    int i=0,*a;
    a=x; //stores base address to a
    printf("\nArray Data\n");
    while(i<5)
    {
        scanf("%d",a);
        a=a+1;
        i++;
    }
    printf("\nData\n");
    for (i=0,a=x ; i < 5 ; a++,i++)
    {
        printf("%4d",*a);
    }
    
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int x[5];
    int *b,*a;
    a=x+0; //stores base address to a
    b=x+4;
    printf("\nArray Data\n");
    while(a<=b)
    {
        printf("\nEnter Number");
        scanf("%d",a);
        a++;
    }
    printf("\nData\n");
    for (a=x ; a<=b ; a++)
        printf("%4d",*a);
    return 0;
}                                                     