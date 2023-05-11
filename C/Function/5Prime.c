//Prime
//all other function definition are of type function call not passing and not returning
/*#include<stdio.h>

int main()
{
    void prime();
    prime();
    return 0;
}
void prime()
{
    int p,n,i;
    printf("\nEnter No:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if (i!=n)
    printf("No");
    printf("Prime");
    return;
}
*/
//OR

#include<stdio.h>

void main()
{
    int prime();
    if(prime()==0)
        printf("Not Prime");
    else
        printf("Prime");
    return;
}
int prime()
{
    int n,i;
    printf("\nEnter No:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        break;
        i++;
    }
    return (i==n);
}
