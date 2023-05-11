// Create a header file with name adjlist.h
#include <stdio.h>
#include <stdlib.h>
#define M 10

struct list
{
    int data;
    struct list *next;
} * k[M];

struct list *createNode(int d)
{
    struct list *p;
    p = (struct list *)malloc(sizeof(struct list));
    p->data = d;
    p->next = NULL;
    return p;
}

void createList()
{
    int i = 0, d;
    struct list *p, *q;
    while (i < M)
    {
        printf("\nEnter Vertex:");
        scanf("%d", &d);
        if (d == 0)
            break;
        k[i] = p = createNode(d);
        printf("\nEnter Adjacent Nodes:\n")-;
        while (1)
        {
            scanf("%d", &d);
            if (d == 0)
                break;
            p->next = createNode(d);
            p = p->next;
        }
        i++;
    }
}
