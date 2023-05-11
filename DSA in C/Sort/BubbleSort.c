//*___________________________________________-BUBBLE SORT-______________________________________________________*//

#include <stdio.h>
#include <stdlib.h>

#define M 5

void input(int *a)
{
    int i = 0;
    printf("\nEnter Data:\n");
    while (i < M)
    {
        scanf("%d", a + i);
        i++;
    }
}

void display(int *a, int flg)
{
    int i = 0;
    if (flg == 0)
        printf("\nBefore Search");
    else
        printf("\nAfter Search");
    while (i < M)
    {
        printf("\n%4d", *(a + i));
        i++;
    }
}

void bubble(int *a)
{
    int i=0,j,pos,flg,tmp;
    while (i<M-1)
    {
        j=0,flg=0;
        while (j<M-i-1)
        {
            if (a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                flg=1;
            }
            j++;
        }
        if(flg==0)
            break;
        i++;
    }
}

int main()
{
    int x[M];
    input(x);
    display(x,0);
    bubble(x);
    display(x,1);
    return 0;
}