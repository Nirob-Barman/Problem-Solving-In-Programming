#include<stdio.h>

int main()
{
    long long int n,a;
    scanf("%lld",&n);
    if(n>=3)
    {
        a=n;
        n=(n-1)*n;
        n/=2;
        n-=a;
        printf("%lld\n",n);
    }
}
