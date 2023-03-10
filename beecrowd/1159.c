#include<stdio.h>

int main()
{
    int n,b,i,sum;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        sum=0;
        if(n%2!=0)
            n++;
        for(i=n,b=1;b<=5;i+=2,b++)
        sum=sum+i;
        printf("%d\n",sum);
    }
}
