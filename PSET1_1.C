#include <stdio.h>

int main()
{
char s[100];
int i,len;
    printf("enter the s");
scanf("%s",&s);
len=strlen(s);
for(i=len;i>=0;i--)
{
	printf("%c",s[i]);
}
return 0;
}
