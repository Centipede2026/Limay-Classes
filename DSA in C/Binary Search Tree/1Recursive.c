#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *left;
    int data, flg;
    struct node *right;
} NODE;

typedef struct btree
{
    NODE *rt;   // Root node
    NODE *prnt; // Parent Node
    NODE *curr; // Current Node
} BST;

void init(BST *t)
{
    t->rt = NULL;
    t->curr = t->prnt = NULL;
}

NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->left = a->right = NULL;
    return a;
}

// pre-order
void preOrder(NODE *a)
{
    if (a != NULL)
    {
        printf("%4d", a->data);
        preOrder(a->left);
        preOrder(a->right);
    }
    else
        return;
}

// in-order
void inOrder(NODE *a)
{
    if (a != NULL)
    {
        inOrder(a->left);
        printf("%4d", a->data);
        inOrder(a->right);
    }
    else
        return;
}

// post-order
void postOrder(NODE *a)
{
    if (a != NULL)
    {
        postOrder(a->left);
        postOrder(a->right);
        printf("%4d", a->data);
    }
    else
        return;
}

// Create BST
void createBST(BST *t)
{
    NODE *a, *b;
    int d;
    while (1)
    {
        printf("\nData:");
        scanf("%d", &d);
        if (d == 0)
            break;
        if (t->rt == NULL)
            t->rt = createNode(d);
        else
        {
            a = t->rt;
            while (1)
            {
                if (d < a->data)
                {
                    if (a->left == NULL)
                    {
                        b - createNode(d);
                        a->left; //=b
                        break;
                    }
                    else
                        a = a->left;
                }
                else
                {
                    if (a->right == NULL) //!=
                    {
                        b = createNode(d);
                        a->right = b;
                        break;
                    }
                    else
                        a = a->right;
                }
            }
        }
    }
}

//function to search data from BST
int search(BST *t,int sv)
{
    int flg=0;
    NODE *a=t->rt;
    while (a!=NULL)
    {
        if (a->data==sv)
        {
            t->curr=a,flg=1;
            break;
        }
        else{
            if (sv<a->data)
            {
                t->prnt=a;
                a=a->left;
            }
            else
            {
                t->prnt=a;
                a=a->right;
            }
        }
    }
    return flg;
}


void delNode(BST *t,int val)
{
    NODE *p,*q,*r,*s;
    if (search(t,val)==0)
    {
        printf("\nNot Found");
        return;
    }
    p=t->prnt;
    q=t->curr;
    //leaf Node
    if (q->left==NULL && q->right==NULL)
    {
        if(p->left==q)
            p->left=NULL;
        else    
            p->right=NULL;
        free(q);
        return;
    }
}

int main()
{
    BST p;
    int opt, d, sv, res;
    init(&p);
    while (1)
    {
        printf("\nMenu\n1.CreateBST\n2.PreOrder\n3.InOrder\n4.PostOrder\n5.Search\n6.Delete\n7.Exit\nOption:");
        scanf("%d", &opt);
        if (opt > 7)
            break;
        switch (opt)
        {
        case 1:
            createBST(&p);
            break;
        case 2:
            printf("\nPreOrder\n");
            preOrder(p.rt);
            break;
        case 3:
            printf("\nInOrder\n");
            inOrder(p.rt);
            break;
        case 4:
            printf("\nPostOrder\n");
            postOrder(p.rt);
            break;
        case 5:
            printf("\nEnter Search Value:");
            scanf("%d",&sv);
            search(&p,sv);
            if(res==1)
                printf("Found");
            else    
                printf("Not found");
            break;
        case 6:
            printf("\nEnter Data to delete:");
            scanf("%d",&d);
            delNode(&p,d);
            break;
        }
    }
    return 0;
}