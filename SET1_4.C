#include <stdio.h>

int main()
{
    char n;
    printf("enter the value ch");
    scanf("%c",&n);
    if(n>='a'&&n<='z')
    {
        printf("alphate");
    }
    else
    {
        printf("no");
    }
    return 0;
}
