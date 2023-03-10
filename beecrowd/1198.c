#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,dif;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        dif=fabs(a-b);
        printf("%lld\n",dif);
    }
}
