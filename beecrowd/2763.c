#include<stdio.h>
#include<string.h>

int main()
{
    int l,i;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='.'||s[i]=='-')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    printf("\n");
}
