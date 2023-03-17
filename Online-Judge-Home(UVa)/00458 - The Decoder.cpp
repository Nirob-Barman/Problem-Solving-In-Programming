#include<bits/stdc++.h>

int main()
{
    int i,l;
    char s[1000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
            printf("%c",s[i]-7);
            printf("\n");
    }
}
