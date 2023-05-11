#include<stdio.h>
void main()
{
    int ishexchar();
    if(ishexchar()==0)
    printf("\nOther ");
    else
    printf("\nHex ");
    printf("Character");
    return;
}

int ishexchar()
{
    char ch;
    printf("Type a char : ");
    scanf("%c",&ch);
    return(ch>='A' && ch <= 'F');
}