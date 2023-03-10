#include<stdio.h>
#include<string.h>

int main()
{
    int l,t,k,i;
    scanf("%d",&t);
    char s[100];
    for(k=0;k<t;k++)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        if(l==5)
            printf("3\n");
        else if(s[0]=='o'&&s[1]=='n'|| s[0]=='o' && s[2]=='e' || s[1]=='n' && s[2]=='e')
            printf("1\n");
        else
            printf("2\n");
    }
}
