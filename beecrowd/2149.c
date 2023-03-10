#include<stdio.h>

int main()
{
    int i,n;
    ///long long int a[17] = {0,1,1,1,2,2,4,8,12,96,108,10368,10476,108615168,108625644,11798392572168192,11798392680793836};
    while(scanf("%d",&n)!=EOF)
    {
        ///printf("%lld\n",a[n-1]);
        long long int a[17];
        a[0]=0;
        a[1]=1;
        for(i=2;i<n;i++)
        {
            if(i%2==0)
                a[i]=a[i-1]+a[i-2];
            else
                a[i]=a[i-1]*a[i-2];
        }
        printf("%lld\n",a[n-1]);
    }
}
