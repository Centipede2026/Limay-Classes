//Create a new file "wbook3.c" and define a program

#include <stdio.h>
#include <stdlib.h>
#include "3Awbook.h"

void main()
{
    BOOK p[5];
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
    return;
}