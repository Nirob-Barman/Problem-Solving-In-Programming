#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        n=n*(n+1)*(2*n+1)/6;
        printf("%d\n",n);
    }
}

