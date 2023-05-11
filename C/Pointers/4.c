void main()
{
    int no;
    void input(int*);
    void update(int *,int);
    void display(int);
    input(&no);
    display(no);
    update(&no,5);
    display(no);
    return;
}
void input(int *p)
{
    printf("\nEnter No:");
    scanf("%d",p);
}

void update(int *a,int b)
{
    *a+=5;
}

void display(int a)
{
    printf("\n Data: %d",a);
}