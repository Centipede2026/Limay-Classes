#include<stdio.h>
void main()
{
    int n,res;
    int oddeven();
    printf("\nEnter no : ");
    scanf("%d",&n);
    res = oddeven(n);
    if(res == 1)
    printf("\nOdd no");
    else
    printf("\nEven no");
    return;
}

int oddeven(int a)
{
    return(a%2);
}