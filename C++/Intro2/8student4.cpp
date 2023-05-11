#include "8student.h"

void main()
{
    Student *a=new Student[5];
    for (int i = 0; i <5; i++)
        (a+i)->set(i+1);
    for (int i = 0; i < 5; i++)
        (*(a+i)).display();
    delete[]a;
}


