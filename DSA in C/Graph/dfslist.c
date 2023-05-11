#include "adjlist.h"

int visited[M];

void dfs(int v)
{
    struct list *p;
    visited[v] = 1;
    p = k[v];
    printf("%4d", p->data);
    while (p != NULL)
    {
        if (visited[p->data] == 0)
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

// input
/*
1 2 3 0
2 1 4 0
3 1 4 0
4 2 3 5 0
5 4 0

Output
1 2 4 3 5
*/
/*
INPUT:
1 2 3 0
2 1 4 5 0
3 1 6 7 0
4 2 8 0
5 2 8 0
6 3 8 0
7 3 8 0
8 4 5 6 7 0

OUTPUT:
1 2 4 8 5 6 3 7
*/

/*
INPUT*/