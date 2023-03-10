#include<stdio.h>

int main()
{
    long long int a,b,i,sum,ta,tb;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        ta=1;
        tb=1;
        for(i=a;i>0;i--)
            ta=ta*i;
        for(i=b;i>0;i--)
            tb=tb*i;
        sum=ta+tb;
        printf("%lld\n",sum);
    }
}
