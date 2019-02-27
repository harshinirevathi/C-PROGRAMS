#include <stdio.h>

int main()
{
    char n;
    printf("enter the value n");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
    return 0;
}
