#include<stdio.h>

int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        if(n%2==0)
            printf("Case %d: %d\n",k,a[(n+1)/2]);
        else
            printf("Case %d: %d\n",k,a[n/2]);
        k++;
    }
}
