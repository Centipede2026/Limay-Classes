#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node* next;
}NODE;

typedef struct doubltlist
{
    NODE* st;                //pointer to first node
    NODE* ed;                //pointer to last node
}DLIST;

void init(DLIST *t)
{
    t->st=NULL;
    t->ed=NULL;
}

//function to create NODE
NODE * createNode(int d)
{
    NODE *a=(NODE *)malloc(sizeof(NODE));
    a->data=d;
    a->prev=a->prev=NULL;
    return a;
}

//function to add new node at end
void addEnd(DLIST *t,int d)
{
    NODE*a=createNode(d);
    NODE*b=t->ed;
    if (t->st==NULL)
    {
        t->st=a;
    }
    else
    {
        b->next=a;
        a->prev=b;
    }
    t->ed=a;
}

//function to add new node at begin
void addBeg(DLIST *t,int d)
{
    NODE*a=createNode(d);
    NODE*b=t->st;
    if (t->ed==NULL)
        t->ed=a;
    else{
        a->next=b;
        b->prev=a;
    }
    t->st=a;
}

//Function to display DLIST from Begin to end
void dispBE(DLIST *t)
{
    NODE *a=t->st;
    if(t->st==NULL)
        printf("\nEmpty List");
    else
    {
        printf("\nData\n");
        while (a!=NULL)
        {
            printf("%4d",a->data);
            a=a->next;
        }
    }
}
void dispEB(DLIST *t)
{
    NODE *a=t->ed;
    if(t->ed==NULL)
        printf("\nEmpty List");
    else{
        printf("\nData\n");
        while (a!=NULL)
        {
            printf("%4d",a->data);
            a=a->prev;
        }
    }
}

//function to count NODES
int count(DLIST *t)
{
    NODE *a=t->st;
    int cnt=0;
    while (a!=NULL)
    {
        cnt++;
        a=a->next;
    }
    return cnt;
}

//function to compute sum
int sum(DLIST *t)
{
    NODE *a=t->st;
    int tot=0;
    while (a!=NULL)
    {
        tot+=a->data;
        a=a->next;
    }
    return tot;
}

//function to delete first node from the list
void delFirst(DLIST *t)
{
    NODE *a=t->st,*b;
    if (t->st==NULL)
        return;
    if (t->st==t->ed)
        t->st=t->ed=NULL;
    else
    {
        b=a->next;
        b->prev=NULL;
        t->st=b;
    }
    free(a);
}

//function to delete last node from the list
void delLast(DLIST *t)
{
    NODE *a=t->ed,*b;
    if (t->ed==NULL)
        return;
    if (t->st==t->ed)
        t->st=t->ed=NULL;
    else
    {
        b=a->prev;
        b->next=NULL;
        t->ed=b;
    }
    free(a);
}

//function to delete ith NODE from the list
void deliNode(DLIST *t,int pos)
{
    NODE *a=t->st,*b,*c;
    int i=1,cnt=count(t);
    if (cnt==0 || pos<1 || pos>cnt)
        return;
    if (pos==1)
        delFirst(t);
    else
    {
        if(pos==cnt)
            delLast(t);
        else
        {
            while (i<pos)
            {
                b=a;
                a=a->next;
                i++;
            }
            c=a->next;
            b->next=c;
            c->next=b;
            free(a);
        }            
    }
}

//function to insert new NODE before ith position
void insertB(DLIST *t, int pos,int d)
{
    NODE *a=t->st,*b,*c;
    int i=1,cnt=count(t);
    if (cnt==0 || pos<1 || pos>cnt)
        return;
    if (pos==1)
        addBeg(t,d);
    else
    {
        while (i<pos && a!=NULL)
        {
            b=a;
            a=a->next;
            i++;
        }
        c=createNode(d);
        b->next=c;
        c->prev=b;
        c->next=a;
        a->prev=c; 
    }       
}


//function to insert new NODE after ith position

void insertA(DLIST *t,int pos, int d)
{
   NODE *a=t->st,*b,*c;
    int i=1,cnt=count(t);
    if (cnt==0 || pos<1 || pos>cnt)
        return;
    if (pos=cnt)
        addEnd(t,d);
    else
    {
        while (i<=pos && a!=NULL)
        {
            b=a;
            a=a->next;
            i++;
        }
        c=createNode(d);
        b->next=c;
        c->prev=b;
        c->next=a;
        a->prev=c;        
    } 
}

int main()
{
    DLIST p;
    int opt,pos,d;
    init(&p);
    while (1)
    {
        printf("\nMenu\n1.AddEnd\n2.AddBeg\n3.DisplayBE\n4.DisplayEB\n5.Count\n6.Sum\n7.delFirst\n8.delLast\n9.del i Node\n10.Insert before i\n11.Insert after i\n12.Eit\nOption:");
        scanf("%d",&opt);
        if (opt>11)
            break;
        switch (opt)
        {
        case 1:
            printf("\nData:");
            scanf("%d",&d);
            addEnd(&p,d);
            break;
        case 2:
            printf("\nData:");
            scanf("%d",&d);
            addBeg(&p,d);
            break;
        case 3:
            dispBE(&p);
            break;
        case 4:
            dispEB(&p);
            break;
        case 5:
            printf("\nNodeCount:%d",count(&p));
            break;
        case 6:
            printf("\nData sum:%d",sum(&p));
            break;
        case 7:
            delFirst(&p);
            break;
        case 8:
            delLast(&p);
            break;
        case 9:
            printf("\nPosition to delete Node:");
            scanf("%d",&pos);
            deliNode(&p,pos);
            break;
        case 10:
            printf("\nData to Insert:");
            scanf("%d",&d);
            printf("\nPosition:");
            scanf("%d",&pos);
            insertB(&p,pos,d);
            break;
        case 11:
            printf("\nData to Insert:");
            scanf("%d",&d);
            printf("\nPosition:");
            scanf("%d",&pos);
            insertB(&p,pos,d);
            break;
        }
    }
    return 0;
}

//3 5 6 8 9