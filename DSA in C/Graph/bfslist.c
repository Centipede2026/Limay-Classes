//Breadfirst Traversal

#include<stdio.h>
#include<stdlib.h>
#define M 10

struct list
{
    int data;
    char ch;
    struct list *next;
}*k[M];

int visited[M];

struct list * createNode(int d,char ch)
{
    struct list *a;
    a=(struct list*)malloc(sizeof(struct list));
    a->data=d;
    a->next=NULL;
    a->ch=ch;
    return a;
}

struct queue
{
    int arr[M];
    int fr,rr;
}q;

void init()
{
    q.rr=-1;
    q.fr=0;
}

int isEmpty()
{
    return q.rr<q.fr;
}

void insert(int v)
{
    q.rr++;
    q.arr[q.rr]=v;
}

int remque()
{
    return q.arr[q.fr++];
}

void createList()
{
    int i=1,d;
    char ch;
    struct list*p;
    while(1)
    {
        printf("\nVertex \n");
        scanf("%d", &d);
        if(d==0)
            break;
        printf("\nLabel for Vertex %d \n", i);
        scanf(" %c", &ch);
        k[i]=p=createNode(d,ch);
        printf("\nEnter Adjacent Nodes\n");
        while(1)
        {
            printf("\nVertex:");
            scanf("%d",&d);
            if(d==0)
                break;
            printf("\nLabel:");
            scanf(" %c",&ch);
            p->next=createNode(d,ch);
            p=p->next;
        }
        i++;
    }
}

void bfs(int v)
{
    struct list *p;
    visited[v]=1;
    p=k[v];
    printf("%c",p->ch);
    insert(v);
    while (!isEmpty())
    {
        v=remque();
        p=k[v];
        while (p!=NULL)
        {
            if (visited[p->data]==0)
            {
                insert(p->data);
                printf("%c ",p->ch);
                visited[p->data]=1;
            }
            p=p->next;            
        }
    }
}

/*
Input:
1A 2B 3C
2B 1A 3C 4D
3C 1A 2B 4D
4D 2B 3C*/

int main()
{
    init();
    createList();
    bfs(1);
    return 0;
}
