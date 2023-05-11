// Conversion of infix expression to its equivalent postfix expression

#include <stdio.h>
#include <ctype.h>

struct stack
{
    int top;
    char opr[20];
}s;

void init()
{
    s.top = -1;
}

void push(char ch)
{
    s.top++;
    s.opr[s.top] = ch;
}

void pop()
{
    s.top--;
}
int isEmpty()
{
    return (s.top == -1);
}

int preced(char stktop, char opr)
{
    if (stktop != '(' && opr == ')')
        return 1;
    else
        return 0;
}

int main()
{
    char istr[50], pstr[50], ch;
    int i = 0, j = 0;
    init();
    printf("\nEnter Infix Expression: ");
    scanf("%s", istr);
    while (istr[i] != '\0')
    {
        if (isalpha(istr[i]))
            pstr[j++] = istr[i];
        else
        {
            while (!isEmpty() && preced(s.opr[s.top], istr[i]))
            {
                ch = s.opr[s.top];
                pop();
                pstr[j++] = ch;
            }
            if (isEmpty() || istr[i] != ')')
                push(istr[i]);
            else
                pop();
        }
        i++;
    }
    while (!isEmpty())
    {
        ch = s.opr[s.top];
        pop();
        pstr[j++] = ch;
    }
    pstr[j] = '\0';
    printf("\nPostfix Expression: %s", pstr);
    return 0;
}
