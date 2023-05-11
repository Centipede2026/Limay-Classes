#include"slist1.h"
void main()
{
    int opt,d;
    while(1)
    {
        printf("\nMenu\n1.Add at begin\n2.Add at end\n3.DIsplay\n4.Exit\nOption:");
        scanf("%d",&opt);
        if(opt>3)
            break;
        switch(opt)
        {
            case 1:
                printf("\nData At Begin:");
                scanf("%d",&d);
                addbegin(d);
                break;
            case 2:
                printf("\nData At End:");
                scanf("%d",&d);
                addend(d);
                break;
            case 3:
                printf("\nDisplay:");
                display(); 
        }
    }
}