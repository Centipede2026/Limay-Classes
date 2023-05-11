//Create a new file "wbook2.c" and define a program

#include <stdio.h>
#include <stdlib.h>
#include "3Awbook.h"

void main()
{
    BOOK p;
    BOOK *q;
    q=&p;
    input (&p,102);
    display(q);
    return;
}