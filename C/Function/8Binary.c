//Check to find if the number is binary or not

#include<stdio.h>

void main()
{
    int isbinary();
    if(isbinary()==0)
    printf("Not Binary");
    else
    printf("Binary");
    return;
}
int isbinary()
{
    int a;
    printf("\nEnter No:");
    scanf("%d",&a);
    while(a>0)
    {
        if (a%10>1)
        break;
        a/=10;
    }
    return(a==0);
}