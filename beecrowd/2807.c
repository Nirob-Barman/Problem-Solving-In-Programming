#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    a[0]=1;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        if(i==0)
            printf("%d\n",a[i]);
        else
            printf("%d ",a[i]);
    }
}
