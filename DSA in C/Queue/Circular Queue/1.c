#include <stdio.h>
#include <stdlib.h>
#define m 5
typedef struct queue
{
    int arr[m];
    int fr, rr;
} CQ;
void init(CQ *t)
{
    int i = 0;
    while (i < m)
    {
        t->arr[i] = -1;
        i++;
    }
    t->fr = t->rr = m - 1;
}
int count(CQ *t)
{
    int i = 0, cnt = 0;
    while (i < m)
    {
        if (t->arr[i] == -1)
            cnt++;
        i++;
    }
    return cnt;
}
void insert(CQ *t, int d)
{

    if (count(t) == 0)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        if (t->rr == m - 1)
        {
            t->rr = 0;
        }
        else
        {
            t->rr++;
            t->arr[t->rr] = d;
        }
    }
}
void remov(CQ *t)
{
    if (count(t) == m)
    {
        printf("\n UNDERFLOW");
    }
    else
    {
        if (t->fr == m - 1)
        {
            t->fr = 0;
        }
        else
        {
            t->fr++;
            t->arr[t->fr] = -1;
        }
    }
}
void display(CQ *t)
{
    int i;
    if (count(t) == m)
    {
        printf("\n EMPTY QUEUE");
    }
    else
    {

        printf("\nDATA\n");
        if (t->fr < t->rr)
        {
            for (i = t->fr + 1; i <= t->rr; i++)
            {
                printf("%4d", t->arr[i]);
            }
        }
        else
        {
            for (int i = t->fr + 1; i < m; i++)

                printf(" %4d", t->arr[i]);
            for (int i = 0; i < t->rr; i++)

                printf("%4d", t->arr[i]);
        }
    }
}

int main()
{
    int opt, d;
    CQ p;
    init(&p);
    while (1)
    {
        printf("\n MENU\n1.INSERT\n2.REMOVE\n3.DISPLAY\n4.EXIT\nOPTION :");
        scanf("%d", &opt);
        if (opt > 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("\nDATA:");
            scanf("%d", &d);
            insert(&p, d);
            break;
        case 2:
            remov(&p);
            break;
        case 3:
            display(&p);
            break;

        default:
            break;
        }
    }

    return 0;
}