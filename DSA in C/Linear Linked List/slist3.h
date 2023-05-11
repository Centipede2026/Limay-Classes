#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} NODE;

typedef struct slist
{
    NODE *st;
    int cnt;

} SLIST;

SLIST m;

NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

// function to retrieve last node
NODE *getLastNode(NODE *a)
{
    while (a->next != NULL)
        a = a->next;
    return a;
}

// function for initialization
void init(SLIST *t)
{
    t->st = NULL;
    t->cnt = 0;
}

// function to add new NODE at end
void addEND(SLIST *t, int d)
{
    NODE *a, *b;
    a = createNode(d);
    if (t->st == NULL)
        t->st = a;
    else
    {
        b = getLAstNode(t->st);
        b->next = a;
    }
    t->cnt++;
}

// function to add new node at begin
void addBeg(SLIST *t, int d)
{
    NODE *a;
    a = createNode(d);
    a->next = t->st;
    t->st = a;
    t->cnt++;
}

// function to display list data
void display(SLIST *t)
{
    NODE *a = t->st;
    if (t->st == NULL)
    {
        printf("\n Empty List\n");
    }
    else
    {
        printf("\n Data \n");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

// function to compute data sum
int sum(SLIST *t)
{
    NODE *a = t->st;
    int total = 0;
    while (a != NULL)
    {
        total = total + a->next;
        a = a->next;
    }
    return total;
}

// Call from main
// case 4:
// printf("\n Data Sum; %d",sum(&p));
// break;

// case5:
// if (p.st==NULL)
// printf("\nEMpty LISt");
// else
// printf("\n Max: %d",findMAx(&p));
// break;

// function to find max data
int findMax(SLIST *t)
{
    NODE *a = t->st;
    int max = a->data;
    for (a = a->next; a != NULL; a = a->next)
    {
        if (a->data > max)
            max = a->data;
    }
    return max;
}

// function to find min
int min(SLIST *t)
{
    NODE *a = t->st;
    int min = a->data;
    for (a = a->next; a != NULL; a = a->next)
    {
        if (a->data < min)
            min = a->data;
    }
    return min;
}

// function to search data from the list
NODE *search(SLIST *t, int sv)
{
    NODE *a = t->st;
    while (a != NULL)
    {
        if (a->data == sv)
            break;
        a = a->next;
    }
    return a;
}

// function to find and replace
void findrepl(SLIST *t, int sv, int rv)
{
    NODE *a = t->st;
    while (a != NULL)
    {
        if (a->data == sv)
            a->data == rv;
        a = a->next;
    }
    return;
}
// function to delete first node
void delFirst(SLIST *t)
{
    NODE *a = t->st;
    if (a == NULL)
    {
        return;
    }
    t->st = a->next;
    t->cnt--;
    free(a);
    return;
}

// function to delete last node from list
void delLast(SLIST *t)
{
    NODE *a = t->st, *b;
    if (t->st == NULL)
    {
        printf("empty list \n");
        return;
    }
    if (a->next == NULL)
    {
        delFirst(t);
    }
    else
    {
        while (a->next != NULL)
        {
            b = a;
            a = a->next;
        }
        b->next = NULL;
        t->cnt--;
        free(a);
    }
}

// function to delete all nodes
void delAll(SLIST *t)
{
    NODE *a = t->st, *b;
    if (t->st == NULL)
    {
        return;
    }
    while (a != NULL)
    {
        b = a->next;
        free(a);
        a = b;
    }
    t->st = NULL;
    t->cnt = 0;
}
//        OR
/*
void delAll(SLIST *t)
{
    while (t->st!=NULL)
    {
       firstDelet(p);
    }
}
*/

// function to count odd data nodes
int oddCount(SLIST *t)
{
    NODE *a = t->st;
    int cnt = 0;
    while (a != NULL)
    {
        if (a->data % 2 == 1)
            cnt++;
        a = a->next;
    }
    return cnt;
}

// function to count even data node from the list
int evenCount(SLIST *t)
{
    NODE *a = t->st;
    int cnt = 0;
    while (a != NULL)
    {
        if (a->data % 2 == 0)
            cnt++;
        a = a->next;
    }
    return cnt;
}

// function to display odd data from the list
void oddDisplay(SLIST *t)
{
    NODE *a = t->st;
    printf("\nOdd Data\n");
    while (a != NULL)
    {
        if (a->data % 2 == 0)
            printf("%4d", a->data);
        a = a->next;
    }
    return;
}

// function to display even data from th list
void evenDisplay(SLIST *t)
{
    NODE *a = t->st;
    printf("\nEven Data\n");
    while (a != NULL)
    {
        if (a->data % 2 == 0)
            printf("%4d", a->data);
        a = a->next;
    }
    return;
}

// insert node
void insert(SLIST *t)
{
    int val;
    NODE *a = t->st, *b, *c;
    while (a != NULL)
    {
        b = a->next;
        if (b == NULL)
            break;
        val = a->data + b->data;
        c = createNode(val);
        c->next = b->next;
        b->next = c;
        a = c->next;
        t->cnt++;
    }
}

/// functoin
void fun(SLIST *t)
{
    NODE *a = NULL, *b = t->st, *c;
    while (b != NULL)
    {
        c = b->next;
        b->next = a;
        a = b;
        b = c;
    }
    t->st = a;
}

// fun to delet ith pos node
void deliNOde(SLIST *t, int pos)
{
    NODE *a, *b, *c;
    int i = 1;
    if (t->st == NULL)
        return;
    if (pos < 1 || pos > t->cnt)
    {
        printf("\nInvalid  Node Position");
        return;
    }
    if (pos == 1)
        delFirst(t);
    else
    {
        if (pos == t->cnt)
            delLast(t);
        else
        {
            b = t->st;
            while (i < pos)
            {
                a = b;
                b = b->next;
                i++;
            }
            c = b->next;
            a->next = c;
            free(b);
            t->cnt--;
        }
    }
}

// fn to insert new node before ith position
void insertB(SLIST *t, int pos, int d)
{
    NODE *a = t->st, *b, *c;
    int i = 1;
    if (t->st == NULL) // Empty
        return;
    if (pos < 1 || pos > t->cnt) // Invalid
        return;
    if (pos == 1)
        addBeg(t, d);
    else
    {
        while (i < pos)
        {
            b = a;
            a = a->next;
            i++;
        }
        c = createNode(d);
        b->next = c;
        c->next = a;
        t->cnt++;
    }
}

// fn to insert new node after ith positin
void insertA(SLIST *t, int pos, int d)
{
    NODE *a = t->st, *b, *c;
    int i = 1;
    if (t->st == NULL) // Empty
        return;
    if (pos < 1 || pos > t->cnt)
        return;
    if (pos == t->cnt)
        addEnd(t, d);
    else
    {
        while (i <= pos)
        {
            b = a;
            b = a->next;
            i++;
        }
        c = createNode(d);
        b->next = c;
        c->next = a;
        t->cnt++;
    }
}

// function to reverse the list
void reverse(SLIST *t)
{
    NODE *a = t->st, *b = NULL, *c;
    while (a != NULL)
    {
        c = a->next;
        a->next = b;
        b = a;
        a = c;
    }
    t->st = b;
    return;
}

// function to display string in reverse
void rdisplay(NODE *a)
{
    if (a == NULL)
        return;
    reversDisplay(a->next);
    printf("%4d", a->data);
}

// copy
/*SLIST  copylist(SLIST *d)
{
   SLIST b;NODE *a=t->st;
   init(&b);
   while (a!=NULL)
   {
       addEEnd(&b,a->data);
       a=a->next;
   }
   return b;

}
*/
//   OR
void copyLIST(SLIST *d, SLIST *s)
{
    NODE *a = NULL;
    NODE *b = s->st;
    NODE *c;
    if (s->st == NULL)
        return;
    while (b != NULL)
    {
        c = createNode(b->next);
        if (d->st == NULL)
            d->st = c;
        else
            a->next = c;

        a = c;
        b = b->next;
        d->cnt++;
    }
}

// reverse copy
SLIST reverscopy(SLIST *t)
{
    SLIST b;
    NODE *a = t->st;
    init(&b);
    while (a != NULL)
    {
        addBeg(&b, a->data);
        a = a->next;
    }
    return b;
}

// fn to copy list data to the file slist.txt
void tofile(SLIST *t)
{
    FILE *f;
    NODE *a = t->st;
    int data;
    f = fopen("slist.txt", "w");
    while (a != NULL)
    {
        data = a->data;
        putw(data, f);
        a = a->next;
    }
    fclose(f);
}

// fn to built slist from text file slist.txt
void fromfile(SLIST *t)
{
    FILE *f;
    NODE *a, *b;
    int data;
    f = fopen("slist.txt", "r");
    if (f == NULL)
    {
        printf("\n file not found");
        return;
    }
    if (t->st == NULL)
        delAll(t);
    while (1)
    {
        data = getw(f);
        if (feof(f))
            ;
        break;
        a = createNode(data);
        if (t->st == NULL)
            t->st = a;
        else
            b->next = a;
        b = a;
        t->cnt++;
    }
    fclose(f);
}
// fn to  built slist from array
void fromarray(SLIST *t, int *x, int n)
{
    int data, i = 0;
    NODE *a, *b;
    if (t->cnt > 0)
        delAll(t);
    while (i < n)
    {
        data = x[i];
        a = createNode(data);
        if (t->st == NULL)
            t->st = a;
        else
            b->next = a;
        b = a;
        t->cnt++;
        i++;
    }
}
// fn to copy list data to an array
int *listToarray(SLIST *t)
{
    int *a = (int *)malloc(t->cnt * sizeof(int));
    int i = 0;
    NODE *b = t->st;
    while (b != NULL)
    {
        a[i++] = b->data;
        b = b->next;
    }
    return a;
}
// sort
void sort(SLIST *t)
{
    NODE *a = t->st, *b, *c;
    int tmp;
    while (a->next != NULL)
    {
        b = a;
        for (c = b->next; c != NULL; c = c->next)
        {
            if (c->data < b->data)
                b = c;
        }
        if (a != b)
        {
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
        }
        a = a->next;
    }
}
// fun to append  list
void appendList(SLIST *d, SLIST *s)
{
    NODE *a = NULL;
    NODE *b = s->st;
    NODE *c;
    if (s->st == NULL)
        return;
    if (d->st != NULL)
        a = getlastNode(d->st);
    while (1)
    {
        c = createNode(b->data);
        if (d->st == NULL)
            d->st = c;
        else
            a->next = c;
        a = c;
        b = b->next;
        d->cnt++;
    }
}
// intersection of to list
/*SLIST intersectionLIST(SLIST *t,SLIST  *q)
{
    NODE *a,*b,*c,*d;
    int data;
    SLIST r;
    init(&r);
    sort(p);sort(q);
    if(t->st==NULL || q->st==NULL)
      return r;
    a=t->st;
    b=q->st;
    while (a && b)
    {
        if(a->data < b->data)
        {
             a=a->next;
            continue;
        }
        else
        {
            if(b->data <a->data)
            {
                b=b->next;
                continue;;
            }
        }
        data=a->data;
        a=a->next;
        b=b->next;
        if(r.st==NULL)
          r.st=c=createNode(data);
        else
        {
            if(d->data==data)
              continue;
            c=createNode(data);
            d->next=c;
        }
        d=c;r.cnt++;
    }
    return r;

}*/