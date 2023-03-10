#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        int a[n+1];
        a[0]=1;
        a[1]=1;
        int i;
        for(i=2;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%d\n",a[n]);
    }
}
