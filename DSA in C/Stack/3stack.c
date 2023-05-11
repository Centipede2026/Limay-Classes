#define STACK1_H_INCLUDED
//to check inputted expression have balanced parenthesis or not using stack

#include<stdio.h>
#include<stdlib.h>

#define M 20
typedef struct stack
{
    int top;
    char opr[M];
}CSTK;
void init(CSTK *t)
{
    t->top=-1;
}
void push(CSTK *t,char ch)
{
    t->top++;
    t->opr[t->top]=ch;
}
void pop(CSTK *t)
{
   if(t->top>=0)
    t->top--;
}
char stackTop(CSTK *t)
{
    return t->opr[t->top];
}
//i/p a+b\0 o/p -No parenthesis
//i/p (a+b) o/p -Balanced
//i/p ((a+b) o/p -Unbalanced extra left
//i/p (a+b)) o/p -Unbalanced extra right
//i/p a+b) o/p -Unbalanced extra right

void main()
{
    char q[20],ch;
    int i=0,flg=0;
    CSTK p;
    init(&p);
    printf("\n Expression :\n");
    scanf("%s",q);
    while(q[i]!='\0')
    {
        if(q[i]=='(')
        {
            push(&p,q[i]);
            flg=1;
        }
        else
        {
            if(q[i]==')')
            {
                if(p.top==-1)
                    break;
                else
                    pop(&p);
            }
        }
        i++;
    }
    if(flg==0)
    {
        if(q[i]=='\0')
        {
            printf("\n No Parenthesis");
        }
        else
            printf("\n Unbalanced Extra Rt");
    }
    else
    {
        if(q[i]=='\0')
        {
            if(p.top==-1)
                  printf("\n Balanced ");
        else
             printf("\n Unbalanced Extra Lt");
        }
        else
            printf("\n Unbalanced Extra Rt");
    }
    return;
}