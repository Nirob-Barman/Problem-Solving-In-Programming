#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
}
