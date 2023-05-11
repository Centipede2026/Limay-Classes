#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    struct node *left;
    char ch;
    struct node *right;
}NODE;

typedef struct etree
{
    NODE *rt;
}ETREE;

void init(ETREE*t)
{
    t->rt=NULL;
}

NODE*createNode(char a)
{
    NODE*b=(NODE*)malloc(sizeof(NODE));
    b->left=b->right=NULL;
    b->ch=a;
    return b;
}

struct stack
{
    int top;
    NODE*arr[10];
}s;

void sinit()
{
    s.top=-1;
}

void push (NODE*a)
{
    s.top++;
    s.arr[s.top]=a;
}

NODE*pop()
{
    return s.arr[s.top--];
}

void preOrder(NODE*a)
{
    if (a!=NULL)
    {
        printf("%c",a->ch);
        preOrder(a->left);
        preOrder(a->right);
    }
    else
        return;
}

void inOrder(NODE*a)
{
    if (a!=NULL)
    {
        inOrder(a->left);
        printf("%c",a->ch);
        inOrder(a->right);
    }
    else
        return;
}

void postOrder(NODE*a)
{
    if (a!=NULL)
    {
        postOrder(a->left);
        postOrder(a->right);
        printf("%c",a->ch);
    }
    else
        return;
}

int main()
{
    NODE *x,*y,*z;
    char p[100];
    ETREE q;
    int i=0;
    init(&q);
    sinit();
    printf("\nEnter postfix Expression");
    scanf("%s",&p);
    while (p[i]!=NULL)
    {
        if (isalpha(p[i]))
        {
            push(createNode(p[i]));
        }
        else
        {
            z=pop();
            x=pop();
            y=createNode(p[i]);
            y->right=z;
            y->left=x;
            push(y);
        }
        i++;
    }
    q.rt=pop();    
    printf("\nPre:");
    preOrder(q.rt);
    printf("\nIn:");
    inOrder(q.rt);
    printf("\nPost:");
    postOrder(q.rt);
    return 0;
}