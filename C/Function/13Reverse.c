
#include<stdio.h>
void main()
{
    int rev();
    printf("\nReverse num: %d",rev());
      return;
}
int rev()
{
    long int n,r=0;
    printf("\nENter no : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = r+10+(n%10);
        n /= 10;
    }
    return r;
}