//

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x[5];
    void input(int *,int);
    void display(int *,int);
    input(x,5);
    display(x,5);
    return 0;
}

void input(int*a,int n)
{
    int i=0;
    printf("\nData:\n");
    while(i<n)
    {
        scanf("%d",(a+i));
        i++;
    }
}
void display(int*b,int n)

{
    int i=0;
    printf("\nData:\n");
    while(i<n)
    {
        printf("%4d",*(b+i));
        i++;
    }
}