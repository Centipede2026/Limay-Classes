// Postfix expression evaluation

#include <stdio.h>
#include <stdlib.h>

#define M 10
typedef struct stack
{
    int top;
    int arr[M];
} STK;

void init(STK *t)
{
    t->top = -1;
}

void push(STK *t, int d)
{
    t->top++;
    t->arr[t->top] = d;
}

int pop(STK *t)
{
    return t->arr[t->top--];
}

int isEmpty(STK *t)
{
    return (t->top == -1);
}

int comp(int a, int b, char ch)
{
    int res = 0;
    switch (ch)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    }
    return res;
}

void main()
{
    static int x[26];
    char p[50];
    STK s;
    int i, index, a, b, res;
    init(&s);
    printf("\nPostfix Expression :");
    scanf("%s", p);
    for (i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            index = p[i] - 65;
            printf("\nValue For %c:", p[i]);
            scanf("%d", &x[index]);
        }
    }
    for (i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            index = p[i] - 65;
            push(&s, x[index]);
        }

        else
        {
            b = pop(&s);
            a = pop(&s);
            res = comp(a, b, p[i]);
            push(&s, res);
        }
    }
    printf("\nResult of Postfix Expressino : %d", pop(&s));
    return;
}
