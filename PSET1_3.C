#include <stdio.h>

int main()
{
    int n,r,t,sum=0;
    printf("enter the n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum*10+r;
        t=t/10;
    }
    printf("%d",sum);
    return 0;
}
