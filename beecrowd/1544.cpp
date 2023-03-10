#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        long long ans=1;
        for(int i=0;i<m;i++)
        {
            ans*=(n-i);
            while(ans%10==0)
                ans/=10;
            ans%=1000000000;///10^9
        }
        int last=ans%10;
        cout<<last<<endl;
    }
}
