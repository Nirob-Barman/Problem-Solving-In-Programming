#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sumx=0,i,j,l;
        scanf("%d",&n);
        char s[100];
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            l=strlen(s);
            for(j=0;j<l;j++)
            {
                sumx+=(s[j]-65)+i+j;
            }
        }
        printf("%d\n",sumx);
    }
}
