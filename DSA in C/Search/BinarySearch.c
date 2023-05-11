// the sequential search algorithm is very slow
// if we have array of thousand elements we must do thousand
// comparision in worst case. If the array is not sorted this is the only solution
// but if the array is sorted we can use a more efficient algorithm called binary search.
//     the binary search starts by testing the data in the element at the middle of the array
// this determines if the target is in the first half or the second half of the list ,if it is in the first
// half we don not need to check the second half anymore, if it is in the ssecond halfwe do not
// need to test first half anymore in other words we elimnate half if the list for further consideration
// we repeat this process until we find the target or satisfies ourselves that it is not in the list

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x[10], i = 0, sv, l, r, mid;
    while (i < 10)
    {
        printf("\nno:");
        scanf("%d", &x[i]);
        if (i > 0)
        {
            if (x[i] < x[i - 1])
            {
                printf("\ninvalid");
                continue;
            }
        }
        i++;
    }
    printf("\nsearch value:");
    scanf("%d", &sv);
    l = 0;
    r = 9;
    do
    {
        mid = (l + r) / 2;
        if (sv == x[mid])
            break;
        if (sv < x[mid])
        {
            r = mid - 1;
        }
        else
            l = mid + 1;

    } while (l <= r);
    if (l > r)
        printf("\nNot found");
    else
        printf("\nFound");
    return;
}