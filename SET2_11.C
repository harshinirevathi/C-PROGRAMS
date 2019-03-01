#include <stdio.h>

int main()
{
    int s=0,t,n,r;
    printf("enter the n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
if(n==s)
printf("palindrome");
else
printf("not palindrome");
    return 0;
}
