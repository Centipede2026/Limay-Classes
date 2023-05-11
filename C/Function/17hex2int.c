//hex to integer
//func to convert decimal string to its equ int number
//if char is not a digit char return -1 otherwise return the int value
#include<stdio.h>
#include<string.h>
void main()
{
    int hex2int(char[]);
    char p[15];int res;
    printf("\nEnter String\n");
    scanf("%s",p);
    res = hex2int(p);
    if(res==1)
    printf("\nInvalid\n");
    else
    printf("\nDecimal : %d\n",res);
    return;
}

int hex2int(char k[])
{
    int i=0,val,mp=1,n=0;
   while(i>=0)
   {
    if(k[i]>='A'&& k[i]<='F')
    val = k[i]-55;
    else
    {
        if(k[i]>=48 && k[i]<=57)
        val = k[i]-48;
        else
        break;
    }
    n = n+mp*val;
    mp *= 16;
    i--;

   }
   if(i==-1)
   return n;
   else
   return -1;
}