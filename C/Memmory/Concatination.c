//Concatination of 2 inputed string
#include<stdio.h>
int main()
{
    char a[20],b[20];
    char *c;
    int n,i,j;
    printf("\nString 1:");
    gets(a);
    printf("\nString 2:");
    gets(b);
    n=strlen(a)+strlen(b)+2;
    c=(char *)malloc(n*sizeof(char));

    for (j = 0; *(a+j)!='\0'; i++)
    {
        *(c+j)=*(a+j);
    }
    *(c+j)=" ";

    for (++j,i=0; *(b+j)!='\0'; i++,j++)
    {
        *(c+j)=*(b+i);
    }
    *(c+j)="\0";
    puts(a);
    puts(b);
    free(c);
    free(c);
    return 0;
}
