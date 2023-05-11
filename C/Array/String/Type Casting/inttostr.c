// Program to convert integer value to integer string

#include<stdio.h>
#include<string.h>

void main()
{
    int no,dig,i=0,j;
    char p[15],ch;
    printf("\nInteger Value\n");
    scanf("%d", &no);

    //conversion with reversal
    while(no>0)
    {
        dig=no%10;
        ch=(char)(dig+48);
        p[i++]=ch;
        no/=10;
    }
    p[i]='\0';
    j=--i;
    i=0;

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