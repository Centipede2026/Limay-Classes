//^BFS using Adjacency Matrix

#include<stdio.h>
#include<stdlib.h>

int visited[10];
int adj[10][10];
int q[10],f=0,r=-1;
int n,i,j;

//^function to create Adjacency Matrix

void createMatrix()
{
    int r,c;
    while(1)
    {
        printf("\nRow:");
        scanf("%d",&r);
        printf("\nColumn:");
        scanf("%d",&c);
        if(r==0 && c==0)
            break;
        if(r<1 || c<1 || r>n || c>n)
            continue;
        adj[r][c]=adj[c][r]=1;
    }
}

void bfs(int v)
{
    int k;
    visited[v]=1;
    printf("%4d",v);
    q[++r]=v; //insertion
    while(f<=r)
    {
        v=q[f++]; //remove
        for(k=1; k<=n; k++)
        {
            q[++r]=k;
            visited[k]=1;
            printf("%4d",k);
        }
    }
}

int main()
{
    printf("\nVertices Count:");
    scanf("%d",&n);
    createMatrix();
    bfs(1);
    return 0;
}