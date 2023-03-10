#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%d",&n);
    long long totalSum = (n*(n+1)/2);
    int a[n-1],loopSum=0;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        loopSum+=a[i];
    }
    printf("%d\n",totalSum - loopSum);
}
