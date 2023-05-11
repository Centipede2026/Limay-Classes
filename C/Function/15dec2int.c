//func to convert decimal string to its equ int number
//if char is not a digit char return -1 otherwise return the int value
#include<stdio.h>
void main()
{
    int dec2int(char[]);
    char p[15];int res;
    printf("\nEnter String\n");
    scanf("%s",p);
    res = dec2int(p);
    if(res==1)
    printf("\nInvalid\n");
    else
    printf("\nDecimal\n");
    return;
}

int dec2int(char k[])
{
    int i=0,val,n=0;
    while(k[i] != '\0')
    {
        if(k[i]>='0' && k[i]<='9')
        {
            val = k[i]-48;
            n = n*10 + val;
        }
        else
        break;
        i++;
    }
    if(k[i]=='\0')
    return n;
    else
    return -1;
}