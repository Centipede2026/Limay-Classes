//Use of array as element of structure

#include<stdio.h>

typedef struct mark
{
    int rno;
    int mr[5];
}MRK;

void main()
{
    MRK p;
    int i=0,tot=0;
    printf("\nRoll No.");
    scanf("%d",&p.rno);
    printf("\nMarks\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&p.mr[i]);
    }
    printf("\nRoll No:%d",p.rno);
    printf("\nMarks\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%4d",p.mr[i]);
        tot+=p.mr[i];
    }
    printf("\nTotal: %d",tot);
    
    
    return;
}