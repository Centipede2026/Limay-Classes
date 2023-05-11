//Fibonacci Search

#include <stdio.h>
#define M 10

void display(int *a)
{
    int i=0;
    printf("\nData:\n");
    while(i<M)
        printf("%4d",a[i++]);
}

void input(int *a)
{
    int i=0;
    while(i<M)
    {
        printf("\nData: ");
        scanf("%d",(a+i));
        if(i>0)
        {
            if(a[i]<a[i-1])
            {
                printf("\nInvalid");
                continue;
            }
        }
        i++;
    }
}

int fibosearch(int *a,int sv)
{
    int f1,f2,mid,index,first;
    f1=1;f2=0;mid=2;
    while(f1<M)
    {
        f1=f1+f2;
        f2=f1-f2;
        mid++;
    }
    f2=f1-f2;
    f1=f1-f2;
    mid--;
    first=0;
    while (mid>0)
    {
        index=first+f1;
        if(index>=M || sv<a[index])
        {
            mid--;
            f2=f1-f2;
            f1=f1-f2;
        }
        else
        {
            if (sv==a[index])
                break;
            else
            {
                first=index;
                mid=mid-2;
                f1=f1-f2;
                f2=f2-f1;
            }
        }
    }
    if(mid>0)
        return index;
    return -1;    
}

int main()
{
    int x[M],sv,res;
    input(x);
    display(x);
    printf("\nSearch:");
    scanf("%d",&sv);
    res=fibosearch(x,sv);
    if(res>=0)
        printf("\nFound");    
    else
        printf("\nNot Found");    
    return 0;
}