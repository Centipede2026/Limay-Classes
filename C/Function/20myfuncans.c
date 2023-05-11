#include<stdio.h>
//#include "myfunc.h" // search for files in set folders and current  folders
void main()
{
    int n, res, opt, i = 1;
    while (1)
    {
        printf("\nMenu\n1.Enter no\n2.oddeven\n3.digitsum\n4.digit count\n5.reverse no\6.palindrome\n7/table\n8.isprime\n9.exit\noption:");
        scanf("%d", &opt);
        if (opt > 8)
            break;

        switch (opt)
        {
        case 1:
            printf("Enter no :");
            scanf("%d", &n);
            break;
        case 2:
            if (oddeven(n) == 1)
                printf("\nodd");
            else
                printf("\even");
            break;
        case 3:
            printf("Digit Sum : %D", digsum(n));
            break;
        case 4:
            printf("Digits : %d,length(n");
        case 5:
            printf("Reverse no : %d", rev(n));
            break;
        case 6:
            if (rev(n) != n)
            {
                printf("Not ");
            }
            printf("palindrome");
            break;
        case 8:
            printf("\nTable\n");
            for (i = 0; i < 10; i++)
                printf("%4d", n * i);
            break;
        default:
            break;
        }
    }
}