#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,l,p;
    char s[1005],temp[1005];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                s[i]+=3;
        }
        p=l-1;
        for(i=0;i<l;i++)
        {
            temp[i]=s[p];
            p--;
        }
        temp[i]='\0';

        for(i=l/2;i<l;i++)
        {
            temp[i]-=1;
        }
        printf("%s\n",temp);
    }
}
