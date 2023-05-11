//*___________________________________________-INSERTION SORT-____________________________________________________*//

#include <stdio.h>
#include <stdlib.h>

#define M 5

//Variation-1
/*
void main()
{
    int x[5],val,i=0,j;
    while (i<5)
    {
        printf("\nData: ");
        scanf("%d",&val);
        for (j=i-1; j>=0 && val<x[j]; j--)
            x[j+1]=x[j];
        x[j+1]=val;
        i++;     
    }
    printf("\nData:\n");
    for ( i=0; i<5 ;i++)
    {
        printf("%4d",x[i]);
    }
}
*/

//Variation-2
void main()
{
    int x[5],val,i=0,j;
    while (i<5)
    {
        printf("\nData: ");
        scanf("%d",&x[i]);
        i++;
    }
    printf("\nBefore Sorting\n");
    for (i=0; i<5 ;i++)
        printf("\n%4d",x[i]);
    for (i=1; i<5 ;i++)
    {
        val=x[i];
        for (j=i-1; j>=0 ;j--)
        {
            if (val<x[j])
                x[j+1]=x[j];
            else    
                break;
        }
        x[j+1]=val;
    }
}