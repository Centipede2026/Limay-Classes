//^---------------------------------------------BINARY SEARCH----------------------------------------------------^//
/*
The sequential search is very slow. If we have thousand elements we must do 1000 comparisions in worst case.
if the array is not sorted this is the only solution. But if the array is sorted we can use a more efficient algorithm
called the binary search. The binary search starts by testing the data in the element in the middle of the array
this determines if the target is in the first half or the second half of the list. If it is in the first half we do
not need to check the second half anymore. If it is in the second half we do not need to test the first half anymore.
In other words we eliminate half of the list from further consideration. We repeate this process until we find the 
target or satisfy ourselves that it is not in the list.
*/

#include<stdio.h>                                   
#include<stdlib.h>

int main()
{
    int x[10],sv,i=0,mid,l,r;
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
    l=0;
    r=9;
    do
    {
        mid=(l+r)/2;
        if (sv==x[mid])
            break;
        if (sv<x[mid])
            r=mid-1;
        else
            l=mid+1;
    } while (l<=r);
    if (l>r)
        printf("\nNot Found");
    else
        printf("\nFound");
    return 0;
}
