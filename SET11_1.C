#include <stdio.h>
void main()
{
    char a[100];
    int n=0,t,i;
    scanf("%d",&t);
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=n-t;i<n;i++)
    printf("%c",a[i]);
getch();
}
