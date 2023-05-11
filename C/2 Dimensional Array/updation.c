//WAP to update a 2D array of size [4][3] and display it in matrix form

#include<stdio.h>

void main()
{
    int x[4][3],i,j;
    printf("\nData\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nx[%d][%d}: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nMatrix\n");
    for (i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
            printf("%5d",x[i][j]);
        printf("\n");
    }
    return;
}
