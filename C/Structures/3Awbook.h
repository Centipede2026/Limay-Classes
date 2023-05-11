//Create a header file "wbook.h" & define dara type & fns
//#include<stdio.h>
//#include<stdlib.h>

typedef struct book
{
    int bno;
    char bnm[15];
    int bprice;
}BOOK;

//function to update BOOK type record

void input(BOOK *a ,int no)
{
    a->bno=no;
    printf("\nBook Name");
    scanf("%s",a->bnm);
    do
    {
        printf("\nBook Price");
        scanf("%d",&a->bprice);
    } while (a->bprice<=0);
    return;
}

void display(BOOK *a)
{
    printf("\nBook Data\n No: %d\nName: %s\nPrice: %d");
    a->bno,a->bnm,a->bprice;
    return;
}