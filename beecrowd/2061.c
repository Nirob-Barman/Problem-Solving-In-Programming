#include<stdio.h>

int main()
{
    int n,m,count=0,i;
    char s[10];
    scanf("%d %d",&n,&m);
    count=n;
    for(i=0;i<m;i++)
    {
        scanf(" %[^\n]",s);
        if(s[0]=='f')
            count++;
        else
            count--;
    }
    printf("%d\n",count);
}
