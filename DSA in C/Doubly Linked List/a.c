#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} NODE;
typedef struct DoubleList
{
    NODE *st; // to first node
    NODE *ed; // to last node

} DLIST;
void init(DLIST *t)
{
    t->st = NULL;
    t->ed = NULL;
}
// function to create node
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->prev = a->next = NULL;
    return a;
}
// function to add new node at END
void addEnd(DLIST *t, int d)
{
    NODE *a = createNode(d);
    NODE *b = t->ed;
    if (t->st == NULL)
    {
        t->st = a;
    }
    else
    {
        b->next = a;
        a->prev = b;
    }
    t->ed = a;
}
void addBeg(DLIST *t, int d)
{
    NODE *a = createNode(d);
    NODE *b = t->st;
    if (t->ed == NULL)
    {
        t->ed = a;
    }
    else
    {
        a->next = b;
        b->prev = a;
    }
    t->st = a;
}
// function to display list Begin to End
void displayBE(DLIST *t)
{
    NODE *a = t->st;
    if (t->st == NULL)
        printf("\n EMPTY LIST");
    else
    {
        printf("\n Data\n");
        while (a != NULL)
        {
            printf("\n %4d ", a->data);
            a = a->next;
        }
    }
}
// function to display list End to Begin
void displayEB(DLIST *t)
{
    NODE *a = t->ed;
    if (t->ed == NULL)
        printf("\n EMPTY LIST");
    else
    {
        printf("\n DATA \n");
        while (a != NULL)
        {
            printf("\n %4d ", a->data);
            a = a->prev;
        }
    }
}
// functio to  cout nodes from the list
int count(DLIST *t)
{
    NODE *a = t->st;
    int cnt = 0;
    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

// function to compute sum
int Sum(DLIST *t)
{
    NODE *a = t->st;
    int tot = 0;
    while (a != NULL)
    {
        tot += a->data;
        a = a->next;
    }
    return tot;
}
// function to delete first NODE
void delFirst(DLIST *t)
{
    NODE *a = t->st, *b;
    if (t->st == NULL)
    {
        return;
    }
    else
    {
        b = a->next;
        b->prev = NULL;
        t->st = b;
    }
    free(a);
}
// function to delete last node
void delEnd(DLIST *t)
{
    NODE *a = t->ed, *b;
    if (t->ed == NULL)
    {
        return;
    }
    else
    {
        b = a->prev;
        b->next = NULL;
        t->ed = b;
    }
    free(a);
}

// function to delete ith node from the list
void deliNode(DLIST *t, int pos)
{
    NODE *a = t->st, *b, *c;
    int i = 1, cnt = count(t);
    if (cnt == 0 || pos < 1 || pos > cnt)
        return;
    if (pos == 1)
        delFirst(t);
    else
    {
        if (pos == cnt)
            delEnd(t);
        else
        {
            while (i < pos)
            {
                b = a;
                a = a->next;
                i++;
            }
            c = c->next;
            b->next = c;
            c->prev = b;
            free(a);
        }
    }
}

// function to insert new node before position
void insertB(DLIST *t, int pos, int d)
{
    NODE *a = t->st, *b, *c;
    int i = 1, cnt = count(t);
    if (cnt == 0 || pos < 1 || pos > cnt)
        return;
    if (pos == 1)
        addBeg(t, d);
    else
    {
        while (i < pos && a != NULL)
        {
            b = a;
            a = a->next;
            i++;
        }
        createNode(d);
        b->next = c;
        c->prev = b;
        c->next = a;
        a->prev = c;
    }
}

// function to insert new node after ith position
void insertA(DLIST *t, int pos, int d)
{
    NODE *a = t->st, *b, *c;
    int i = 1, cnt = count(t);
    if (cnt == 0 || pos < 1 || pos > cnt)
        return;
    if (pos == cnt)
        addEnd(t, d);
    else
    {
        while (i <= pos && a != NULL)
        {
            b = a;
            a = a->next;
            i++;
        }
        createNode(d);
        b->next = c;
        c->prev = b;
        c->next = a;
        a->prev = c;
    }
};

void main()
{
    DLIST p;
    int opt, pos, d;
    init(&p);
    while (1)
    {
        printf("\nMenu\n1.Add End 1\n2.Add Beg 2\n3.Display SE 1\n4.Display ES 2\n5.Count\n6.Sum\n7.Del First\n8.Del Last\n9.Del ith Node\n10.Insert Before\n||Insert After\n11.Exit\n Option:");
        scanf("%d", &opt);
        if (opt > 11)
            break;
        switch (opt)
        {
        case 1:
            printf("\nData:");
            scanf("%d", &d);
            addEnd(&p, d);
            break;

        case 2:
            printf("\nData:");
            scanf("%d", &d);
            addBeg(&p, d);
            break;

        case 3:
            displayBE(&p);
            break;

        case 4:
            displayEB(&p);
            break;

        case 5:
            printf("\n Node Count:%d",count(&p));
            break;

        case 6:
            printf("\nData Sum: %d", Sum(&p));
            break;

        case 7:
            delFirst(&p);
            break;

        case 8:
            delEnd(&p);
            break;

        case 9:
            printf("\n Postion to delete Node:");
            scanf("%d", &pos);
            deliNode(&p, pos);
            break;

        case 10:
            printf("\nData to insert:");
            scanf("%d", &d);
            printf("\nPosition:");
            scanf("%d", &pos);
            insertB(&p, pos, d);
            break;

        case 11:
            printf("\nData to insert:");
            scanf("'%d", &pos);
            printf("\nPosition");
            scanf("%d", &pos);
            insertA(&p, pos, d);
            break;
        }
    }
}