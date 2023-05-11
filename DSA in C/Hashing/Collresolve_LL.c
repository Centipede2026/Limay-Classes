// Collision resolution using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int no;
    char nm[15];
    struct student *next;
}STU;

STU k[10];

int hash(int n)
{
    return n%10;
}

void init()
{
    int i=0;
    while(i<10)
    {
        k[i].no=0;
        k[i].next=NULL;
        i++;
    }
}

void insert()
{
    int n,hval;
    STU *p,*q;
    printf("\nRoll No:");
    scanf("%d",&n);
    hval=hash(n);
    if (k[hval].no==0)  //prime area
    {
        k[hval].no=n;
        printf("\nName: ");
        scanf("%s",k[hval].nm);
        printf("\nInsertion at Prime Area");
        return;
    }
    p=(STU*)malloc(sizeof(STU));
    p->no=n;
    printf("\nName:");
    scanf("\nName:");
    p->next=k[hval].next;
    k[hval].next=p;
    printf("\nInsertion in Overflow Area");
}

void search()
{
    int n,hval;
    STU *p;
    printf("\nRoll No:");
    scanf("%d",&n);
    hval=hash(n);
    if (k[hval].no==n)  //prime area
    {
        printf("\nNo:%d\nName:%s",k[hval].no,k[hval].nm);
        printf("\nFound in Prime Area");
        return;
    }
    p=k[hval].next;
    while(p!=NULL)
    {
        if(p->no==n)
            break;
        p=p->next;
    }
    if(p==NULL)
        printf("\nRecord not found");
    else
        printf("\nNo:%d\nName:%s\nRecord found in Overflow Area",p->no,p->nm);
    return;
}

int main()
{
    int opt;
    init();
    while (1)
    {
        printf("\n1.Insert\n2.Search\n3.Exit\nOption:");
        scanf("%d", &opt);
        if (opt > 2)
            break;
        if (opt == 1)
            insert();
        else
            search();
    }
    return 0;
}