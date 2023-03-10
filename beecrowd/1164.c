#include<stdio.h>

int main()
{
    int t,i,k,sum,n;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(n==sum)
            printf("%d eh perfeito\n",n);
        else
            printf("%d nao eh perfeito\n",n);
    }
}
