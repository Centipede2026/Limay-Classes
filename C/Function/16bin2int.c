//func to convert bin string to equ dec number
//func to convert decimal string to its equ int number
//if char is not a digit char return -1 otherwise return the int value
#include<stdio.h>
#include<string.h>
void main()
{
    int bin2int(char[]);
    char p[15];int res;
    printf("\nEnter String\n");
    scanf("%s",p);
    res = bin2int(p);
    if(res==-1)
    printf("\nInvalid\n");
    else
    printf("\nDecimal : %d\n",res);
    return;
}

int bin2int(char k[])
{
    int i=strlen(k)-1,val,n=0,mp=1;
    while(i>=0)
    {
        if(k[i]=='0' || k[i]=='1')
        {
            val = k[i]-48;
            n = n+mp*val;
        }
        else
        break;
        i--,mp*=2;
    }
    if(i==-1)
    return n;
    else
    return -1;
}