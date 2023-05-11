//*___________________________________________-SELECTION SORT-__________________________________________________*//

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

// input 12 28 9 34 16
// output 9 12 16 28 34
void selection(int *a)
{
    int i = 0, j, pos, tmp;
    while (i < M-1)
    {
        pos = i;
        for (j = i+1; j < M; j++)
        {
            if (a[j] < a[pos])
                pos = j;
        }
        if (i != pos)
        {
            tmp=a[i];
            a[i]=a[pos];
            a[pos]=tmp;
        }
        i++;
    }
}

int main()
{
    int x[M];
    input(x);
    display(x,0);
    selection(x);
    display(x,1);
    return 0;
}
