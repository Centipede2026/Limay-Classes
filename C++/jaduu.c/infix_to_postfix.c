#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int top=-1, max, i=0,oprnd=0,oprtr=0;
char p[100],stack[100];
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
    return -1;
    else
    return stack[top--];
}
    int priority(char x)
    {
        if(x=='(')
        return 0;
        if(x=='+' || x=='-')
        return 1;
        if(x=='*' || x=='/')
        return 2;
    }
int main()
{
    printf("\nEnter Infix Expression: ");
    scanf("%s",p);
    char *e,x;
    e=p;
    while(p[i]!=0)
    {
        if(isalnum(p[i])||p[i]=='('||p[i]==')')
        oprnd++;
        else
        oprtr++;
        i++;
    }
    if(oprnd<=oprtr)
    {
        printf("\nInvalid Infix expression");
        return 0;
    }
    printf("Postfix Expression is: ");
    while(*e!='\0')
    {
        if(isalnum(*e))//checking the char is alphaNumeric or not
        printf("%c",*e);
        else if(*e=='(')
        push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
            printf("%c",x);
        }
        else
        {
            while(priority(stack[top])>=priority(*e))
            printf("%c",pop());
            push (*e);
        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
    return 0;
}
