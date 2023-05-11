
#include<stdio.h>
void main()
{
    int digsum();
    printf("\nSum : %d",digsum());
      return;
}
int digsum()
{
    int n,tot=0;
    printf("\nENter no : ");
    scanf("%d",&n);
    while(n>0)
    {
        tot += (n%10);
        n /= 10;
    }
    return tot;
}