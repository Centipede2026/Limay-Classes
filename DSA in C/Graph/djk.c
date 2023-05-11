#include <stdio.h>
#include <stdlib.h>
#define INF 999 // Infinite

int adj[10][10];
int n;
void init()
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            adj[i][j] = INF;
        }
    }
}
void createGraph()
{
    int s, d, val; // source and destination and there value
    init();
    while (1)
    {
        printf("\n S D : ");
        scanf("%d %d", &s, &d);
        if (s == 0 && d == 0)
            break;
        if (s < 1 || d < 1 || s > n || d > n)
            continue;
        printf("\n Weight : ");
        scanf("%d", &val);
        adj[s][d] = adj[d][s] = val;
    }
}
void djk()
{
    int s, d, curr, sd, nd, i;
    int visited[10];
    int dist[10], preced[10];
    do
    {
        //accept source destination

        printf("\n Source : ");
        scanf("%d", &s);
        printf("\n Destination : ");
        scanf("%d", &d);
        if (s == 0 && d == 0)
            break;
        dist[s] = 0;
        preced[s] = s;
        visited[s] = 1;
        curr = s;
        while (curr != d)
        {
            for (i = 1; i <= n; i++)
            {
                nd = dist[curr] + adj[curr][i];
                if (nd < dist[i])
                {
                    dist[i] = nd;
                    preced[i] = curr;
                }
            }
            sd = INF;
            for (i = 1; i <= n; i++)
            {
                if (visited[i] == 0 && dist[i] < sd)
                {
                    sd = dist[i];
                    curr = i;
                }
            }
            visited[curr] = 1;
        }
        printf("\n Shortest Distance : %d ", dist[curr]);
        printf("\n Path : %d->", d);
        while (preced[curr] != s)
        {
            curr = preced[curr];
            printf("%d ->", curr);
        }

    }while (1);
}
int main()
{
    printf("\n Node Count  : ");
    scanf("%d", &n);
    createGraph();
    djk();

    return 0;
}
