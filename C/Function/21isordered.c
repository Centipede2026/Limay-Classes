void main()
{
    int x[10],i,res;
    int isordered(int[],int);
    printf("\nArray data\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    res=isordered(x,10);
    if (res==0)
        printf("\nUnordered");
    else
        printf("\nOrdered");
    return;
}

int isordered(int y[],int n)
{
    int i=1;
    while(i<n)
    {
        if (y[i]<y[i-1])
            break;
        i++;
    }
    if(i==n)
        return 1;
    else
        return 0;
}