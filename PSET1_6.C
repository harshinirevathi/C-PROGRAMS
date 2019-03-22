void main()
{
    char a[100],b[100],c[100];
    int i,j,k=0,len=0,m=0;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        len++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==b[i+1])
        k++;
    }
    if(len==k)
    printf("isomorphic");
    else
    printf("no");

}
