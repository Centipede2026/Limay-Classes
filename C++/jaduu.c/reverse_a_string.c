#include <stdio.h>
char stack[10],*str,p[100];
int top=-1, i=0;
void push(char n)
{
    stack[++top] = n;
}
char pop()
{
    return stack[top--];
}
int main()
{
    printf("Enter a string : ");
    scanf("%s", p);
    str=p;
    while(*str!=0)
   {
    push(*str);
     str++;
   }
   printf("\nReverse string: ");
   while(top!=-1)
   printf("%c", pop());
}