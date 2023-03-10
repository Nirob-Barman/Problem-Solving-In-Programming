#include<stdio.h>

int main()
{
    int t,k,i,n,count;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        count=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);
    }
}
