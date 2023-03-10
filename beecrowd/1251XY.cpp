#include<stdio.h>

int main()
{
    char s[1000];
    while(scanf("%s",s)!=EOF)
    {
        int i,j,a[26]={0};
        if(s[0]>='A' && s[0]<='Z')
        {
            for(i=0;s[i];i++)
            {
                a[s[i]-'A']++;
            }
            for(i=25;i>=0;i--)
                if(a[i]!=0)
                printf("%d %d\n",i+'A',a[i]);
        }
        if(s[0]>='0' && s[0]<='9')
        {
            for(i=0;s[i];i++)
                a[s[i]-'0']++;
            for(i=0;i<10;i++)
                if(a[i]!=0)
                printf("%d %d\n",i+'0',a[i]);
        }
        printf("\n");
    }
}
