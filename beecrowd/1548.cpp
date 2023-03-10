#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(a,a+n,greater<int>());
        int c=0;
        for(int i=0;i<n;i++)
        {
            ///printf("%d\n",a[i]);
            if(a[i]==b[i])
                c++;
        }
        printf("%d\n",c);
    }
}
