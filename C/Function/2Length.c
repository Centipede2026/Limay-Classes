//Write a function to input the length of the input number
#include<stdio.h>

void main()
{
    void length();
    length();
    return;
}

void length()
{
    int cnt=0,n;
    printf("\nEnter Number:");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    printf("\nDigit Count: %d",cnt);
    return;
}

//OR
/*
#include<stdio.h>

void main()
{
    int length();
    printf("\nDigit Count:",length());
    return;
}

int length()
{
    int cnt=0,n;
    printf("\nEnter Number:");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}*/