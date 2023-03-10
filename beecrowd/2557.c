#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100];
    int x,y,z,i,l;

    while(gets(s)!=EOF)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]!='+' || s[i]!='=')
            {
                x=atoi(s[i]);
                printf("%d",x);
            }
        }
    }
}
