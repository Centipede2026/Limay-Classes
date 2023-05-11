//Write a function to check the inputed character is a digit character
#include<stdio.h>

void main()
{
    int isdigit();
    if (isdigit()==0)
    printf("Other Character");
    else
    printf("Digit Character");
    return;
}

int isdigit()
{
    char a;
    printf("Type a Character");
    scanf("%c",&a);
    return (a>=48 && a<='9');
}