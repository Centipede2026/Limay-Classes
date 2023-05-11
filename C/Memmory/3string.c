//function to copy string
#include <stdio.h>

void main()
{
    char s[50];
    char *d;
    int i,n;
    printf("\nSource String\n");
    gets(s);
    n=strlen(s)+1;
    d=(char*)malloc(n*sizeof(char));
    for (i = 0; *(s+i)!='\0'; i++)
    {
        *(d+i)=*(s+i);
    }
    *(d+i)='\0';
    puts(s);
    puts(d);
    free(s);
    free(d);
    return;
}