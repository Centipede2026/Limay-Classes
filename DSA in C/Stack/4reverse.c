//Using stack reverse the input
#define M 50
#include <stdio.h>
#include <stdlib.h>

typedef struct stack55


{
    int top;
    char opr[M];
} CSTK;

void init(CSTK *t)
{
    t->top = -1;
}

void push(CSTK *t, char ch)
{
    t->top++;
    t->opr[t->top] = ch;
}

char pop(CSTK *t)
{
    if (t->top == -1)
        return '\0';
    else
        return t->opr[t->top--];
}

int main()
{
    char a[50],b[50],ch;
    int i=0,flg=0;
    CSTK p;
    init(&p);
    printf("\nString");
    gets(a);
    while (a[i]!='\0')
    {
        push(&p,a[i]);
        i++;
    }
    for ( i = 0; 1; i++)
    {
        ch=pop(&p);
        b[i]=ch;
        if(ch=='0')
            break;
    }
    return 0;
}


char stackTop(CSTK *t)
{
    return t->opr[t->top];
}