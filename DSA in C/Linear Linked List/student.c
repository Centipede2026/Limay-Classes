#include "slist3.h"

typedef struct student
{
    int rno;
    char nm[15];
    int mrk;
}STU;

void input(STU*t,int no)
{
    t->rno=no;
    printf("\nStudent Name:");
    scanf("%s",t->nm);
    printf("\nMarks:");
    scanf("%s",&t->mrk);
}

void output(STU*t)
{
    printf("\n %5s %-15s %4d", t->rno,t->nm,t->mrk);
}

typedef struct node
{
    STU data;
    struct node*next;
}NODE;

typedef struct stalist
{
    NODE *st;
    int cnt;
}STULIST;

void init(STULIST *t)
{
    t->st=NULL;
    t->cnt=0;
}

//function to search STU record rollnumberwise, return NULL if not found o.w. return NODE address

NODE* search(STULIST *t, int no)
{
    NODE *a=t->st;
    while (a!=NULL)
    {
        if((a->data).rno==no)
            break;
        a=a->next;
    }
    return a;
}

//function to add new STU record

void add(STULIST *t)
{
    int no;
    NODE *a;
    printf("\nEnter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if (a!=NULL)
    {
        printf("\nRecord Exists");
        return;
    }
    a=(NODE*)malloc(sizeof(NODE));
    input(&a->data,no);
    a->next=t->st;
    t->st=a;
    t->cnt++;
}

//function to modify existing STU record

void mod(STULIST *t)
{
    int no;
    NODE *a;
    printf("\nEnter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if(a==NULL)
    {
        printf("\nRecord Not Exists");
        return;
    }
    input(&a->data,no);
}

//function to delete exists STU record

void del(STULIST *t)
{
    int no;
    NODE *a,*b,*c;
    printf("\nEnter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if (a==NULL)
    {
        printf("\nRecord Not Exists");
        return;
    }
    if(a==t->st)   //first NODE
    {
        t->st=a->next;
        t->cnt--;
        free(a);
        return;
    }
    b=t->st;
    while(b->next!=a)
        b=b->next;
    c=a->next;
    b->next=c;
    free(a);
    t->cnt--;
}

//function to display STU record
void display(STULIST *t)
{
    NODE*a=t->st;
    if (t->cnt==0)
        printf("\nEmpty List");
    else
    {
        printf("\nStudent Record\n");
        while(a!=NULL)
        {
            output(&a->data);
            a=a->next;
        }
    }
    return;
}


void main()
{
    STULIST p;
    int opt;
    init(&p);
    while (1)
    {
        printf("\nMenu\n1.Odd\n2.Modify\n3.Delete\n4.Display\n5.Exit\nOption:");
        scanf("%d",&opt);
        if (opt>4)
            break;
        switch(opt)
        {
            case 1:
                add(&p);
                break;
            case 2:
                mod(&p);
                break;
            case 3:
                del(&p);
                break;
            case 4:
                display(&p);
        }
    }
    
}