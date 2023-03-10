#include<stdio.h>
#include<string.h>

int main()
{
    int l,bit=0;
    char s[101];
    scanf("%s",s);
    l=strlen(s);
    int i;
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
            bit++;
    }
    if(bit%2==0)
       s[i]='0';
    else
        s[i]='1';
    s[i+1]='\0';
    printf("%s\n",s);
}
