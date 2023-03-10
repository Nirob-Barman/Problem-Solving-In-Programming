#include<stdio.h>
#include<string.h>

int main()
{
    int t,k,l;
    char s[10001];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        printf("%.02lf\n",l*.01);
    }
}
