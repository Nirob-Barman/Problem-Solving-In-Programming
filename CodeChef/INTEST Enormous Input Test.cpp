#include<bits/stdc++.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int c=0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x%k==0)
            c++;
    }
    printf("%d\n",c);
}
