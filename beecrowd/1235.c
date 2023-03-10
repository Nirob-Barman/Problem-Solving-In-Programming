#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,t,l;
    char s[105],sa[105];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        l=strlen(s);
        j=0;
        for(i=l/2-1;i>=0;i--)
        {
            sa[j]=s[i];
            j++;
        }
        for(i=l-1;i>=l/2;i--)
        {
            sa[j]=s[i];
            j++;
        }
        sa[j]='\0';
        puts(sa);
    }
}
