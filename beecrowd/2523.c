#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,n,l,t,k;
    while(scanf(" %[^\n]",s)!=EOF)
    {
        scanf("%d",&n);
        for(t=0;t<n;t++)
        {
            scanf("%d",&l);
            printf("%c",s[l-1]);
        }
        printf("\n");
    }
}
