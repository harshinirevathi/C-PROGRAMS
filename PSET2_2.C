int main()
{
    int n,b,a[100],i,temp,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        temp=a[n-1];
            for(j=n-1;j>=0;j--)
            {
                a[j+1]=a[j];
            }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}
