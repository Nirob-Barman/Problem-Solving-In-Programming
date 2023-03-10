#include<stdio.h>

int main()
{
    int t,a,b,i,j,swap,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
        {
        sum=0;
        for(j=a+1;j<b;j++)
        {
            if(j%2==1)
            {
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
        }
        else if(a>b)
        {
            sum=0;
            for(j=a-1;j>b;j--)
            {
                if(j%2==1)
                    sum=sum+j;
            }
            printf("%d\n",sum);
        }
        else if(a==b)
        {
            sum=0;
            printf("%d\n",sum);
        }
    }

}
