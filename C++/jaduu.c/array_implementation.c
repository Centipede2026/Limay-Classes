#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top, max;
void push(int *t)
{
    int d;
    if (top > max - 1)
        printf("\nStack overflow...");
    else
    {
        printf("\nEnter value to be pushed: ");
        scanf("%d", &d);
        top++;
        *(t + top) = d;
    }
}
void pop(int *t)
{
    if (top <= -1)
        printf("\nEmpty Stock...");
    else
    {
        top--;
        printf("\nPopped succesfully..");
    }
}
void display(int *t)
{
    // int i=top;
    if (top < 0)
        printf("\nStack is Alredy empty..");
    else
    {
        printf("\nStack Data:");
        for (int i=top; i > 0; i--)
            printf("\n%4d", *(t + i));
    }
}
int main()
{
    int top = -1, opt;
    printf("\nEnter max size of array: ");
    scanf("%d", &max);
    int *a = (int *)malloc(sizeof(int) * max);
    while (1)
    {
        printf("\n\t*****Menu****\n1.Push(input)\n2.Pop(delete)\n3.Display\n4.Exit\nChoice: ");
        scanf("%d", &opt);
        if (opt > 3)
            break;
        else
        {
            switch (opt)
            {
            case 1:
                push(a);
                break;
            case 2:
                pop(a);
                break;
            case 3:
                display(a);
                break;
            }
        }
    }
    return 0;
}