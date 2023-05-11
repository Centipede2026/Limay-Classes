// func to check inputted string is bin
#include <stdio.h>
void main()
{
    int isbin(char[]);
    char p[15];
    int res;
    printf("\nEnter string\n");
    scanf("%s", p);
    res = isbin(p);
    if (res == 1)
        printf("\nBinary string");
    else
        printf("\nNot a binary string");
    return;
}

int isbin(char k[])
{
    int i = 0;
    while (k[i] != '\0')
    {
        if (k[i] == '0' || k[i] == '1')
            i++;
        else
            break;
    }
    if (k[i] == '\0')
        return 1;
    else
        return 0;
}