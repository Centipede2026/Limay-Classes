#include<stdio.h>
#include "adjlist1.h"

int visited[M];

void dfs(int v)
{
    struct list *p;
    visited[v] = 1;
    p = k[v];
    printf("%c", p->ch);
    while (p != NULL)
    {
        if (visited[p->data]==0)
            dfs(p->data);
        else
            p = p->next;
    }
}

int main()
{
    createList();
    dfs(1);
    return 0;
}

/*
INPUT
1A 2 3 0
2B 1 4 0
3C 1 4 0
4D 2 3 5 0
5E 4 0

OUTPUT:
*/