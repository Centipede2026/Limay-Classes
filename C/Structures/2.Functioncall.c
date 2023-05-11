//Fucntion call by passing value and passing reference
#include<stdio.h>

struct student 
{
    int rno;
    char nm[15];
    float mrk;
};

void input(struct student *p)             //call by reference
{
    printf("\nRoll no. ");
    scanf("%d",&p->rno);
    printf("\nName ");
    scanf("%s",&p->nm);
    printf("\nMarks ");
    scanf("%f",&p->mrk);
}

void display(struct student p)
{
    printf("\nRoll no. %d\nName: %s\nMarks: %f",p.rno,p.nm,p.mrk);
    return ;
}

void main()
{
    struct student a;
    input(&a);   //call by reference
    display(a);  //call by value
}
