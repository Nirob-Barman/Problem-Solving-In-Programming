#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,k=0;
    scanf("%d",&t);
    while(t--)
    {
        k++;
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("Case %d: %d\n",k,a[n/2]);
    }
}
