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

int cnt=0;

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
                        b = createNode(d);
                        a->left=b;
                        break;
                    }
                    else
                        a = a->left;
                }
                else
                {
                    if (a->right == NULL) 
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
    return;
}

//Function to count leaf notes
void countLNodes(NODE*a)
{
    if(a!=NULL)
    {
        countLNodes(a->left);
        if (a->left==NULL && a->right==NULL)
            cnt++;
        countLNodes(a->right);
    }
    else
        return;
}

//function to count leaf nodes using recurrsion

int countLN(NODE *a)
{
    int i;
    if (a==NULL)
    {
        return 0;
    }
    if (a->left==NULL && a->right==NULL)
    {
        return 1;
    }
    i=countLN(a->left)+countLN(a->right);
    return i;
}

void countNodes(NODE*a)
{
    if(a!=NULL)
    {
        countNodes(a->left);
        cnt++;
        countNodes(a->right);
    }
    else
        return;
}

//Using recursion
int Count(NODE *a)
{
    int i;
    if (a==NULL)
        return 0;
    i=1+Count(a->left)+Count(a->right);
    return i;
}

void displayLNodes(NODE*a)
{
    if(a!=NULL)
    {
        displayLNodes(a->left);
        if(a->left==NULL && a->right==NULL)
            printf("%4d",a->data);
        displayLNodes(a->right);
    }
    else
        return;
}

//function to count with outdegree 1
int countD1(NODE *a)
{
    int i;
    if (a==NULL)
    {
        return 0;
    }
    if (a->left==NULL && a->right==NULL)
    {
        return 0;
    }
    if (a->left==NULL || a->right==NULL )
    {
        i=1+countD1(a->left)+countD1(a->right);
        return i;
    }
    printf("%4d",a->data);
    i=countD1(a->left)+countD1(a->right);
    return i;
}

//Define a function with out degree 2
int countD2(NODE*a)
{
    int i;
    if (a==NULL)
        return 0;
    if (a->left==NULL && a->right==NULL)
        return 0;
    if (a->left==NULL || a->right==NULL)
    {
        i=countD2(a->left)+countD2(a->right);
        printf("%4d",a->data);
        return i;
    }
    i=1+countD2(a->left)+countD2(a->right);
    return i;
}

NODE*copyTree(NODE*a)
{
    NODE*p=NULL;
    if (a!=NULL)
    {
        p=(NODE*)malloc(sizeof(NODE));
        p->data=a->data;
        p->left=copyTree(a->left);
        p->right=copyTree(a->right);
    }
    return p;
}

NODE *mirrorTree(NODE*a)
{
    NODE*p=NULL;
    if (a!=NULL)
    {
        /* code */
        p=a->left;
        a->left=mirrorTree(a->right);
        a->right=mirrorTree(a->left);
    }
    return a;    
}

int main()
{
    BST p,q;
    int opt, d, sv, res;
    init(&p);
    init(&q);
    while (1)
    {
        printf("\nMenu\n1.CreateBST\n2.PreOrder\n3.InOrder\n4.PostOrder\n5.Count Leaf Nodes\n6.CountNodes\n7.Display Leaf Nodes\n8.Total Nodes\n9.Count Leaf Nodes \n10.Outdegree 1\n11.Outdegree 2\n12.Copy Tree\n13.Mirror Tree\n15Exit\nOption:");
        scanf("%d", &opt);
        if (opt > 15)
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
            cnt=0;
            countLNodes(p.rt);
            printf("\nLeaf Node Count: %d",cnt);
            break;
        case 6: 
            cnt=0;
            countNodes(p.rt);
            printf("\nNode Count: %d",cnt);
            break;
        case 7:
            displayLNodes(p.rt);
            break;
        case 8:
            printf("\nTotal Nodes: %d",Count(p.rt));
            break;
        case 9:
            printf("\nLeaf Nodes: %d",countLN(p.rt));
        case 10:
            printf("\nCount of nodes with outdegree 1 : %d",countD1(p.rt));
            break;
        case 11:
            printf("\nCount of nodes with outdegree 2 : %d",countD2(p.rt));
            break;
        case 12:
            init(&q);
            q.rt=copyTree(p.rt);
            printf("\nInOrder\n");
            break;
        }
    }
    return 0;
}