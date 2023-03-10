#include<stdio.h>

int main()
{
    int t,k,x,y,sum,i,b;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&x,&y);
        sum=0;
        if(x%2==0)
            x++;
        for(i=x,b=1;b<=y;i+=2,b++)
            sum=sum+i;
        printf("%d\n",sum);
    }
}
