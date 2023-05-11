#include <stdio.h>
int stack[10], top = -1, n, t, sum = 0;
void push(int n)
{
    stack[++top] = n;
}
int pop()
{
    if (top == -1)
        return -1;
    return stack[top--];
}
int main()
{
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int tmp = n;
    while (tmp)
    {
        push(tmp % 2);
        tmp /= 2;
    }
    while (1)
    {
        t = pop();
        if (t == -1)
            break;
        sum = sum * 10 + t;
    }
    printf("Binary no: %d", sum);
}