#include<stdio.h>
void main()
{
    int no;int res;
    int digsum(int);
    printf("ENter no : ");
    scanf("%d",&no);
    res = digsum(no);
    printf("\nDigit sum : %d",res);
return;
}

int digsum(int a)
{
    int tot=0;
    while(a>0)
    {
tot += (a%10);
a /= 10;
    }
    return tot;
}

//new definitions
int oddeven(int a)
{
    return (a%2);
}

//digit count
int length(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

//reverse any number
 int rev(int n)
 {
    int r=0;
    while(n>0)
    {
        r = r*10 + (n%10);
        n/=10;
    }
    return r;
 }

 //To check num is prime
 int isprime(int b)
 {
    int i=2;
    while(i<b)
    {
        if(b%i == 0)
        break;
        i++;
    }
    return(i==b);
 }
 