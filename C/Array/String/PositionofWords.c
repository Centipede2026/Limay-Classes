// Program to display every words Begining position

#include<stdio.h>
#include<string.h>

void main()
{
    char p[50];
    int i=0,sp=0,ep;
    printf("\nString:\n");
    gets(p);

    while(1)
    {
        if(p[i]==32||p[i]=='\0') //have a nice day 057
        {
            ep=i-1;
            printf("%d-%d\n",sp,ep);
            if(p[i]=='\0')
                break;
            sp=i+1;
        }
        i++;
    }
    return;
}