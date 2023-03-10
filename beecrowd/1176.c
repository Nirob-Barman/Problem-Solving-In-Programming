#include<stdio.h>

int main()
{
    long long int t,k,i,n,first,second,next;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld",&n);
        first=0;
        second=1;
        for(i=0;i<=n;i++)
        {
            if(i<=1)
                next=i;
            else
            {
                next=first+second;
                first=second;
                second=next;
            }
        }
        printf("Fib(%lld) = %lld\n",n,next);
    }
}
