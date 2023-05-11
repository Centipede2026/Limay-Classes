// Create a header file with name adjlist.h
#include <stdio.h>
#include <stdlib.h>
#define M 10

struct list
{
    int data;
    char ch;
    struct list *next;
} * k[M];

char x[M];

struct list *createNode(int d, char c)
{
    struct list *a;
    a = (struct list *)malloc(sizeof(struct list));
    a->data = d;
    a->ch = c;
    a->next = NULL;
    return a;
}

void createList()
{
    int i = 1, d;
    char c;
    struct list *p, *q;
    while (i < M)
    {
        printf("\nEnter Vertex:");
        scanf("%d", &d);
        printf("\nEnter Label:");
        scanf(" %c", &c);
        x[d] = c;
        if (d == 0)
            break;
        k[i] = p = createNode(d, c);
        printf("\nAdjacent Nodes:\n");
        while (1)
        {
            scanf("%d", &d);
            if (d == 0)
                break;
            p->next = createNode(d, ' ');
            p = p->next;
        }
        i++;
    }
}
