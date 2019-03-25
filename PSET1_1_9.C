#include<stdio.h>
void main()
{
    int i ,j,c,a,b,f;
    scanf("%d%d",&m,&n);

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            f=1;
        }
        
            else
            {
                f=0;
                 c++;
                break;
            }
    }}

    printf("%d",c);
}
