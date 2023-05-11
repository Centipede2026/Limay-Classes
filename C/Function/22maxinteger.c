void main()
{
    int x[10],i,res;
    int findmaxposition(int[],int);
    printf("\nArray data\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    res=findmaxposition(x,10);
    printf("Max Position: %d",res);
    printf("Max Position  Value: %d",&res);
    return;
}

int findmaxposition(int y[],int n)
{
    int i=1,xpos=0;
    while(i<n)
    {
        if (y[i]<y[i-1])
            xpos=i;
        i++;
    }
    return xpos;
}