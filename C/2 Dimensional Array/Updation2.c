//To update a 2D array of 3x3, display its matrix form and transpose form

#include<stdio.h>

void main()
{
    int x[3][3],i,j;
    printf("\nData\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nx[%d][%d}: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nMatrix\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%5d",x[i][j]);
        printf("\n");
    }
    printf("\nTranspose\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("%4d",x[j][i]);
        printf("\n");
    }
    return;
}