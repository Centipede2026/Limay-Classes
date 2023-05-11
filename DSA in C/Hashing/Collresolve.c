// Collision resolution using linear probing and modulo division method
#include <stdio.h>
#include <stdlib.h>

#define M 10
typedef struct student
{
    int rno;
    char nm[15];
} STU;

STU k[M];

int hash(int no)
{
    return (no % M);
}
void init()
{
    int i = 0;
    while (i < M)
    {
        k[i].rno = 0;
        k[i].nm[0] = '\0';
        i++;
    }
}
void insert()
{
    int no, i;
    int hval;
    printf("\nRoll No:");
    scanf("%d", &no);
    hval = hash(no);
    if (k[hval].rno == 0) // search in the home area
    {
        k[hval].rno = no;
        printf("\nName:");
        scanf("%s", k[hval].nm);
        printf("\nInsertion at the home area.");
        return;
    }
    printf("\nColllision occured\n");
    for (i = hval + 1; i < M; i++)
    {
        if (k[i].rno == 0)
        {
            k[i].rno = no;
            printf("\nName: ");
            scanf("%s", k[i].nm);
            printf("\nInsertion on colllsion path.");
            break;
        }
    }
    if (i < M)
        return;
    for (i = 0; i < hval; i++)
    {
        if (k[i].rno == 0)
        {
            k[i].rno = no;
            printf("\nName: ");
            scanf("%s", k[i].nm);
            break;
        }
    }
    if (i == hval)
        printf("\nOverflow.");
    else
        printf("\nInsertion on collision path.");
    return;
}
void search()
{
    int no, i;
    int hval;
    printf("\nRoll No:");
    scanf("%d", &no);
    hval = hash(no);
    if (k[hval].rno == 0) // search in the home area
    {
        k[hval].rno = no;
        printf("\nName:%s", k[hval].nm);
        printf("\nFound in home area.");
        return;
    }
    printf("\nSearch on the collision path.");
    for (i = hval + 1; i < M; i++)
    {
        if (k[i].rno == no)
        {
            printf("\nName: %s", k[i].nm);
            printf("\nFound on the collision path");
            break;
        }
    }
    if (i < M)
        return;
    for (i = 0; i < hval; i++)
    {
        if (k[i].rno == no)
        {
            printf("\nName:%s", k[i].nm);
            break;
        }
    }
    if (i == hval)
        printf("\nNot found.");
    else
        printf("\nFound on the collision path.");
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