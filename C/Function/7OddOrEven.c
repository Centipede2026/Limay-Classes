//function call not passing but returning
//WAP to check inputed number is odd or even,return 1 if it is odd otherwise 0
#include <stdio.h>

void main()
{
    int oddeven();   
    int res;
    res=oddeven();
    if(res==1)
    printf("Odd");
    else
    printf("Even");
    return;
}

int oddeven()
{
    int no;
    printf("\nEnter No.:");
    scanf("%d",&no);
    return(no%2);
}

/*#include <stdio.h>

void main()
{
    int oddeven();   
    if(oddeven())
    printf("Odd");
    else
    printf("Even");
    return;
}

int oddeven()
{
    int no;
    printf("\nEnter No.:");
    scanf("%d",&no);
    return(no%2);
}
*/