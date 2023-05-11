#include "8student.h"

void main()
{
    Student a[5];
    for (int i = 0; i <5; i++)
        a[i].set();
    for (int i = 0; i < 5; i++)
        (*(a+i)).display();
}


