#include<stdio.h>

int main()
{
    int a,b,i=0,sum,swap;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>b)
        {
            swap=a;
            a=b;
            b=swap;
        }
        if(a<=0 || b<=0)
            break;

        sum=0;
        for(i=a;i<=b;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
}
