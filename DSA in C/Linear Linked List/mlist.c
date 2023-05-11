#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;

typedef struct mlist
{
    NODE *st;
}MLIST;

void init(MLIST *t)
{
    t->st=NULL;
}

NODE *createNode(int  d)
{
    NODE *a=(NODE*)malloc(sizeof(NODE));
    a->data=d;
    a->next=NULL;
    return a; 
}

void display(MLIST *t)
{
    NODE *a=t->st;
    if (t->st==NULL)
        printf("\nEmpty List");
    else{
        printf("\nList Data");
        while (a!=NULL)
        {
            printf("%4d",a->data);
            a=a->next;
        }
    }
}

void delAll(MLIST *t)
{
    NODE *a;
    while (t->st!=NULL)
    {
        a=t->st;
        t->st=a->next;
        free(a);
    }
}

//function to create list

void createList(MLIST *t)
{
    int d;
    NODE *a,*b;
    if(t->st!=NULL)
        delAll(t);
    while (1)
    {
        printf("\nData:");
        scanf("%d",&d);
        if(d==0)
        {
            break;
        }
        a=createNode(d);
        if(t->st==NULL)
        {
            t->st=a;
        }
        else
        {
            b->next=a;
        }
        b=a;
    }
}

//function to copy list
void copyList(MLIST *s,MLIST *d)
{
    NODE *a=s->st;
    NODE *b,*c;
    int data;
    if (s->st==NULL)  //Source is empty
        return;
    if (d->st!=NULL) //Destination exists
        delAll(d);
    while (a!=NULL)
    {
        data=a->data;
        b=createNode(data);
        if (d->st==NULL)
            d->st=b;
        else    
            c->next=b;
        c=b;
        a=a->next;
    } 
}

//append at the end
void appendList(MLIST *s,MLIST *d)
{
    NODE *a=s->st;
    NODE *b,*c;
    int data;
    if (s->st==NULL)  //Source is empty
        return;
    if (d->st!=NULL) //Destination exists
        c=d->st;
        while(c->next!=NULL)
        {
            c=c->next;
        }
    while (a!=NULL)
    {
        data=a->data;
        b=createNode(data);
        if (d->st==NULL)
            d->st=b;
        else    
            c->next=b;
        c=b;
        a=a->next;
    } 
}

void sort(MLIST *t)
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

/*
while (a->temp!=NULL)
{
    b=a;
    c=b->next;
    while(c!=NULL)
    {
        if(c->data<b->data)
            b=c;
        c=c->next;
    }
    if (a != b)
    {
        tmp = a->data;
        a->data = b->data;
        b->data = tmp;
    }
    a = a->next;
}*/

//function to merge 2 ordered list to generate the 3rd list
MLIST merge(MLIST *p,MLIST *q)
{
    NODE *a=p->st,*b=q->st,*c,*d;
    MLIST r;
    int data;
    init(&r);
    sort(p);
    sort(q);

    while (a!=NULL && b!=NULL)
    {
        if (a->data < b->data)
        {
            data=a->data;
            a=a->next;
        }
        else
        {
            data=b->data;
            b=b->next;
        }
        c=createNode(data);
        if(r.st==NULL)
            r.st=c;
        else 
        {   
            d->next=c;
        }
        d=c;
    }
    while (a!=NULL)
    {
        data=a->data;
        c=createNode(data);
        if(r.st==NULL)
            r.st=c;
        else 
        {   
            d->next=c;
        }
        d=c;
        a=a->next;
    }
    while (b!=NULL)
    {
        data=b->data;
        c=createNode(data);
        if(r.st==NULL)
            r.st=c;
        else 
        {   
            d->next=c;
        }
        d=c;
        b=b->next;
    }
    return r;
}

//intersection of 2 lists
MLIST intersection(MLIST *p,MLIST *q)
{
    NODE *a=p->st,*b=q->st,*c,*d;
    MLIST r;
    int data;
    init(&r);
    sort(p),sort(q);   
    while(a!=NULL && b!=NULL)
    {
        if(a->data < b->data)
        {
            a=a->next;
        }
        else{
            if(b->data < a->data)
                b=b->next;
            else
            {
                data=a->data;
                if (r.st==NULL)
                {
                    r.st=c=d=createNode(data);
                }
                else
                {
                    if(data!=d->data)
                    {
                        c=createNode(data);
                        d->next=c;
                        d=c;
                    }
                }
                a=a->next;
                b=b->next;
            }
        }
    }
    return r;
}

MLIST unionList (MLIST *p,MLIST *q)
{
    NODE *a=p->st,*b=q->st,*c,*d;
    MLIST r;
    int data;
    init(&r);
    sort(p),sort(q);   
    while(a!=NULL && b!=NULL)
    {
        if(a->data < b->data)
        {
            data=a->data;
            a=a->next;
        }
        else
        {
            if(b->data < a->data)
            {
                data=b->data;
                b=b->next;
            }
            else
            {
                data=a->data;
                a=a->next;
                b=b->next;
            }
        }
        if (r.st==NULL)
            r.st=c=d=createNode(data);
        else{
            if(data==d->data)
                continue;
            c=createNode(data);
            d->next=c;
            d=c;
        }
    }
    while(a!=NULL)
    {
        data=a->data;
        if (r.st==NULL)
            r.st=c=d=createNode(data);
        else{
            if(data==d->data)
                ;
            else{
            c=createNode(data);
            d->next=c;
            d=c;
            }
        }
        a=a->next;
    }
    while(b!=NULL)
    {
        data=b->data;
        if (r.st==NULL)
            r.st=c=d=createNode(data);
        else{
            if(data==d->data)
                ;
            else
            {
            c=createNode(data);
            d->next=c;
            d=c;
            }
        }
        b=b->next;
    }
    return r;
}

int main()
{
    MLIST p,q,r;
    int opt;
    init(&p);
    init(&q);
    init(&r);
    while (1)
    {
        printf("\nMenu\n1.CreateList1\n2.Create List2\n3.Display List1\n4.Display List2\n5.Display List3\n6.Delete List1\n7.Delete List2\n8.Delete List3\n9.Copy list1 to list2\n10.Copy list2 to list1\n11.Append list1 to list3\n12.Append list2 to list3\n13.Merge \n14.intersection\n15.UnionList\nChoice:");
        scanf("%d",&opt);
        if(opt>15)
            break;
        switch(opt)
        {
            case 1:
                createList(&p);
                break;
            case 2:
                createList(&q);
                break;
            case 3:
                display(&p);
                break;
            case 4:
                display(&q);
            case 5:
                display(&r);
            case 6:
                delAll(&p);
                break;
            case 7:
                delAll(&q);
                break;
            case 8:
                delAll(&r);
                break;
            case 9:
                copyList(&r,&p);
                break;
            case 10:
                copyList(&r,&q);
                break;
            case 11:
                appendList(&p,&r);
                break;
            case 12:
                appendList(&q,&r);
                break;
            case 13:
                r=merge(&p,&q);
                break;
            case 14:
                r=intersection(&p,&q);
                break;
            case 15:
                r=unionList(&p,&q);
                break;
        }
    }
    return 0;
}
