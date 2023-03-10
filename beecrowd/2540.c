#include<stdio.h>

int main()
{
    int n,i,count;
    double value;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
                count++;
        }
        //printf("%d\n",count);
        value=(count*100.0)/n;
        //printf("%lf\n",value);
        if(value>=66.666)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
}
