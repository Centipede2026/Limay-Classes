/*
When we have ordered data, a binary search is recommended for searching. If the list is small it can be more 
efficient to use a sequential sesarch. When searching an ordered list however it is not necessary to search
to the end of the list to determine that the target is not in the list. We can stop when the target becomes 
less than or equal to the current element we are testing, in addition we can incorporate the sentinal concept.
When the target is greater than the last element, then the last element becomes a sentinal allowing us to eliminate
test for the end of the list.*/
//---------------------------------------ORDERED LIST SEARCH-----------------------------------------------//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x[11],i=0;
    while (i<10)
    {
        printf("\nNo:");
        scanf("%d",&x[i]);
        if (i>0)
        {
            if(x[i]<x[i-1])
            {
                printf("\nInvalid");
                continue;
            }
        }
        i++;
    }
    printf("\nSearch Value: ");
    scanf("%d",&x[10]);

    for (i=0;i<10 && x[i]<x[10];i++);
    
    if(i<10 && x[i]==x[10])
        printf("\nFound");
    else
        printf("\nNot Found");
    return 0;
}
