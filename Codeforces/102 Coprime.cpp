#include<iostream>
#include<cstdio>

using namespace std;

void solve(int n)
{
    int ans=n;

    for(int i=2;i*i<=n;i++)
    {
        if(!(n%i))
        {
            while(!(n%i))
            {
                n/=i;
            }
            ans-=ans/i;
        }
    }
    if(n>1)
        ans-=ans/n;
    printf("%d\n",ans);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}
