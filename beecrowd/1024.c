#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i,t,l;
    char s[1005];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        for(i=0;i<strlen(s);i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                s[i]+=3;
        }
        strrev(s);
        for(i=strlen(s)/2;i<strlen(s);i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                s[i]-=1;
        }
        printf("%s\n",s);
    }
}
