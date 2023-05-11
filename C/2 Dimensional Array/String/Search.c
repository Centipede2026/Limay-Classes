#include<stdio.h>
#include<string.h>

void main()
{
    char p[5][15],q[15];  //here [15] defines size of char array
    int i=0;
    printf("\nCity Names:");
    for(i=0;i<5;i++)
    {
        scanf("%s",p[i]);
    }

    printf("\nEnter City Name To Search :");
    scanf("%s",q);
    for(i=0;i<5;i++)
    {
        if (strcmp(p[i],q)==0)
        break;
    }
    if(i==5)
        printf("\n Not Found");
    else
        printf("\n Found at Position %d",i);
    return;
}