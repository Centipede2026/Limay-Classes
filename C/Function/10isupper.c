//Write a function to check the inputed character is a digit character
#include<stdio.h>

void main()
{
    int isupper();
    if (isupper()==0)
    printf("Other character");
    else
    printf("upper case Character");
    return;
}

int isupper()
{
    char a;
    printf("Type a Character");
    scanf("%c",&a);
    return (a>=65 && a<='Z');
}

        //    HOMEWORK  //
//function to check inputed character is lowercase
//function to check inputer character is an upper case vowel character
//function to check inputed characte is an hexadecimal character
//function to compute digit sum from an inputed number
//function to generate reverse number