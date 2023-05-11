/*void main()
{
    int x=10;
    printf("\nx: %d",x);
    printf("\n Address: %u",&x);
    printf("\n Value: %d",*(&x));
    return;
}
*/

//How to store address of a variable
/*
void main()
{
    int x=10;
    int *y;
    y=&x;
    printf("\n%d",x);
    printf("\n%u",&x);
    printf("\n%d",*(&x));
    printf("\n%u",y);
    printf("\n%u",&y);
    printf("\n%u",*(&y));
    printf("\n%d",*y);
.   *y=*y+5;
    printf("\n%d",x);
    return
}*/

/*void main()
{
    int x=10;
    printf("\nx: %d",x);
    printf("\n Address: %u",&x);
    printf("\n Value: %d",*(&x));
    return;
}
*/

//How to store address of a variable
#include<stdio.h>
void main()
{
    char a='B';
    char *b;
    b=&a;
    printf("\n%c",a);
    printf("\n%u",&a);
    printf("\n%c",*(&a));
    printf("\n%u",b);
    printf("\n%u",&b);
    printf("\n%u",*(&b));
    printf("\n%c",*b);
    *b=*b+5;
    printf("\n%c",a);
    return;
}
