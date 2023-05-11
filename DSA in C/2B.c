//create a new file and define application program to define 2B.c

#include"slist2.h"

void main()
{
    NODE*st=NULL;
    int opt,d;
    while (1)
    {
        printf("\nMenu\n1.Addend\n2.Addbeg\n3.DIsplay\n4.Exit\nOption:");
        scanf("%d",&opt);
        if(opt>3)
            break;
        switch(opt)
        {
            case 1:
                printf("\nData At End:");
                scanf("%d",&d);
                addbegin(&st,d);
                break;
            case 2:
                printf("\nData At Begining:");
                scanf("%d",&d);
                addend(&st,d);
                break;
            case 3:
                printf("\nDisplay:");
                display(&st);
        }
    }   
}
