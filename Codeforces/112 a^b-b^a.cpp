#include<iostream>
#include<cstdio>

using namespace std;

const int M=1e9;
typedef long long ll;

int mod(int x,int n,int m)
{
    int result=1;

    while(n)
    {
        if(n%2)
            result=(result*x)%m;
        x=(x*x)%m;
        n/=2;
    }
    return result%m;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    ll x=mod(a,b,M);
    ll y=mod(b,a,M);
    printf("%lld\n",x-y);
}
