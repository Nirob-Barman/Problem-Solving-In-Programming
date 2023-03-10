#include<stdio.h>
#include<string.h>

int main()
{
    char s[150];
    int i,l;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==',')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    printf("\n");
}
