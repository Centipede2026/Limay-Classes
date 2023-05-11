//Dynamic Memory Allocation for book type data
#include<stdio.h>
#include<stdlib.h>
#include"3Awbook.h"

void main()
{
    BOOK *p=(BOOK *) malloc(5*sizeof(BOOK));
    int i=0;
    while (i<5)
    {
        input (p+i,i++);
        i++;
    }
    for (i=0;i<5;i++)
    {
        display(&p[i]);
    }
}