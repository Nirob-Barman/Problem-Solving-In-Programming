#include<stdio.h>

int main()
{
    int n,i=0;
    float sum=0.0;
    while(scanf("%d",&n)!=EOF && n>0)
    {
        sum=sum+n;
        i++;
    }
    printf("%.2f\n",sum/i);
}
