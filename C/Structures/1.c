#include<stdio.h>

struct student    //keyword   tag-name
{
    int rno;
    char nm[15];
    float mrk;
    // structure data type can also be used inside other structure data type 
};

int main(int argc, char const *argv[])
{
    struct student p;
    printf("\nRoll no. ");
    scanf("%d",&p.rno);
    printf("\nName ");
    scanf("%s",&p.nm);
    printf("\nMarks ");
    scanf("%f",&p.mrk);
    printf("\nRoll no. %d\nName: %s\nMarks: %f",p.rno,p.nm,p.mrk);
    return 0;
}
