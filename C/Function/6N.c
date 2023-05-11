//function to display N letter
#include<stdio.h>

void main()
{
    void drawN();
    drawN();
    return;
}

void drawN()
{
    int i,j,n;
    printf("\nLine Count:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}