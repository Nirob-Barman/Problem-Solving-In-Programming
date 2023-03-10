#include<stdio.h>

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        char s[n];
    scanf("%s",&s);
    ///printf("%d %s\n",n,s);
    int sum=0;
    for(i=0;s[i]!='\0';i++)
    {
        sum+=(s[i]-'0');
    }
    if(sum%3==0)
        printf("%d sim\n",sum);
    else
        printf("%d nao\n",sum);
    }
}
