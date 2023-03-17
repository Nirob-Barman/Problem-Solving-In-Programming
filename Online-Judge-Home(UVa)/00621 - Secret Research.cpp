#include <bits/stdc++.h>

int main()
{
    int l,t,k;
    char s[1000];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf(" %s",s);
        l=strlen(s);
        //printf("%d\n",l);
        if(!strcmp(s,"1")||!strcmp(s,"4")||!strcmp(s,"78"))
            printf("+\n");
        else if(s[l-1]=='5'&&s[l-2]=='3')
            printf("-\n");
        else if(s[0]=='9'&&s[l-1]=='4')
            printf("*\n");
        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
            printf("?\n");
    }
}
