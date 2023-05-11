// Create a new file and define the application program.
#include <stdio.h>
#include "slist3.h"

void main()
{
    SLIST p;
    int sv, rv, d, opt, res;
    init(&p);
    while (1)
    {
        printf("\nSingle list\nMenu\n1.Add at end\n2.Add at the begin\n3.Count\n4.sum\n5.average\n6.find the maximum element\n7.Find minimum\n8.Search\n9.Find and replace\n10.Display\n11.Exit\nOption:");
        scanf("%d", &opt);
        if (opt > 14)
            break;
        switch (opt)
        {
        case 1:
            printf("\nData at the end:");
            scanf("%d", &d);
            addEnd(&p, d);
            break;
        case 2:
            printf("\nData at begin:");
            scanf("%d", &d);
            addBeg(&p, d);
            break;
        case 10:
            display(&p);
            break;
        case 3:
            printf("\nTotal nodes:%d", p.cnt);
            break;
        case 4:
            printf("\nSum is:%d", total(&p));
            break;
        case 5:
            printf("\nThe average is:%d", total(&p) / p.cnt);
            break;
        case 6:
            if (p.st == NULL)
                printf("\nThe list is empty.");
            else
                printf("\nMax:%d", findMax(&p));
            break;
        case 7:
            if (p.st == NULL)
                printf("\nThe list is empty.");
            else
                printf("\nMin: %d", findMin(&p));
            break;
        case 8:
            printf("\nSearch Data:");
            scanf("%d",&sv);
            if (search(&p,sv) == NULL)
                printf(" Not");
            printf(" found");
            break;
        case 9:
            printf("\nSearch:");
            scanf("%d", &sv);
            printf("\nReplace:");
            scanf("%d", &rv);
            findandreplace(&p, sv, rv);
            break;
        case 11:
            delFisrt(&p);
            break;
        case 12:
            delLast(&p);
            break;
        case 13:
            delAll(&p);
            break;
        case 14:
            printf("\nOdd data nodes: %d", oddCount(&p));
            break;
        case 15:
            printf("\nEven data nodes: %d", evenCount(&p));
            break;
        case 16:
            oddDisplay(&p);
            break;
        case 17:
            evenDisplay(&p);
            break;
        case 18:
            int pos;
            printf("\nEnter node position ti delete");
            scanf("%d",&pos);
            deliNode("&d",pos);
            break;
        case 19:
            printf("\nEnter Node position to insert before:");
            scanf("%d",&pos);
            printf("\nData:");
            scanf("%d",&d);
            insertB(&p,pos,d);
            break;
        case 20:
            printf("\nEnter Node position to insert after:");
            scanf("%d",&pos);
            printf("\nData:");
            scanf("%d",&d);
            insertA(&p,pos,d);
            break;
        case 21:
            reverse(&p);
            break;
        case 22:
            rdisplay(p.st);
            break;
        case 23:
            
        }
    }
    return 0;
}