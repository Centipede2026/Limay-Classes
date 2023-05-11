#include<stdio.h>
void main()
{
    void convert(char*);
    char a[50];
    int i=0;
    printf("\nString");
    gets(a);
    puts(a);
    for(;a[i]='\0';i++)
    {
        convert(&a[i]);
    }
    puts();
    return;
}
void convert(char *b)
{
    if (*b>=65 && *b<=90)
        *b=+32;
    else if(*b>=97 && *b<=122)  
        *b=-32;
    return;
}