#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x[5],i,j,tmp,sv;
    for (int i=0; i<5;i++)
    {
        printf("\nEnter No:");
        scanf("%d",&x[i]);
    }
    while (1)
    {
        /* code */
        printf("\nEnter Search Value");
        scanf("%d",&sv);
        if (sv==0)
            break;
        for (i=0;i<5;i++)
        {
            if (x[i]==sv)
                break;
            if(i==5)
                printf("\nNot Found");
            else
            {
                printf("\nFound at %d",i);
                if(i>0)
                {
                    j=i-1;
                    tmp=x[i];
                    x[i]=x[j];
                    x[j]=tmp;
                }
            }            
        }
    }
    return 0;
}
