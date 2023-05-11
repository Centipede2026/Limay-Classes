/*
Searching is 
   The algo used to search a list depends to a large extent on the structure of the list. Here we study searches that work on arrays. There are two
 basic searches for arrays
 1)sequential search
 2)binary search
 The sequential search can be used to locate an item in any array.The binary search on the other hand requires an ordered list.
 1)sequential search:
 The sequential search is used whenever the list is not ordered.This technique is used only for small list or the list that are not searched often.
 In this searching technique we start searching for the target at the begning of the list and continue untill we find the target or we assure that it is
 not in the list. This gives us two possiblities:
 either we find it or we reach the end of the list.
 Eg:
 Data : 13 9 29 58 4
 sv i x[i]                      sv i x[i]
 21 0  13                       58 0 13           
    1   9                          1 9
    2   29                         2 29
    3    58                        3  58
    4    4                         4   Found
    5   Not found

*/

#include <stdio.h>
#define M 5
void main() {
    int x[M],i,sv;
    printf("\nArray data:\n");
    for(i=0;i<5;i++)
    scanf("%d" ,&x[i]);
    printf("\nSearch Value\n");
    scanf("%d",&sv);
    for(i=0;i<5;i++)
    {
        if(x[i] == sv)
        break;
    }
    if(i==M)
    printf("\nNot found\n");
    else
    printf("\nFound at position: %d",i);
    return ; 
}

/*

#include <stdio.h>
void main() {
    int x[6],i,sv;
    printf("\nArray data:\n");
    for(i=0;i<5;i++)
    scanf("%d" ,&x[i]);
    printf("\nSearch Value\n");
    scanf("%d",&sv);
    for(i=0;x[i] != x[5];i++)
        ;
    if(i==5)
    printf("\nNot found\n");
    else
    printf("\nFound at position: %d",i);
    return ; 
}


*/