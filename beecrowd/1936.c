#include<stdio.h>

int main()
{
    int a[9]={0,1,2,6,24,120,720,5040,40320};
    int i,n;
    scanf("%d",&n);

    int count=0;
    for(i=8;i>=1;i--)
    {
        while(a[i]<=n)
        {
            n-=a[i];
            count++;
        }
    }
    printf("%d\n",count);
}
