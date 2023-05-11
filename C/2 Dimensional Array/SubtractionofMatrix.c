#include<stdio.h>

void main()
{
    int x[3][3],y[3][3],z[3][3],i,j;
    printf("\nMatrix X:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nx[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nMatrix Y\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\ny[%d][%d]:",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]-y[i][j];
        }
    }
    printf("\nOutput\n");
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%4d",y[i][j]);
        }
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%4d",z[i][j]);
        }
        printf("\n");
    }
    return;
}