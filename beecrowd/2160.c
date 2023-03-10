#include<stdio.h>
#include<string.h>

int main()
{
    int l;
    char s[500];
    scanf("%[^\n]",s);
    l=strlen(s);
    if(l<=80)
        printf("YES\n");
    else
        printf("NO\n");
}
