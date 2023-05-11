// Program to convert integer value to Binary string

#include<stdio.h>
#include<string.h>

void main()
{
    int no,dig,i=0,j;
    char p[15],ch;
    printf("\nInteger Value\n");
    scanf("%d", &no);

    //conversion with reversal by collecting remainders
    while(no>0)
    {
        dig=no%16;
        ch=(char)((dig<10)?(48+dig):(55+dig));
        p[i++]=ch;
        no/=16;
    }
    p[i]='\0';
    j=i-1;
    i=0;

    //swapping or reversal
    while(i<j)
    {
        ch=p[i];
        p[i]=p[j];
        p[j]=ch;
        i++;
        j--;
    }
    puts(p);
    return;
}