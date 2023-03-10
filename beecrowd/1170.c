#include<stdio.h>

int main()
{
    int t,k,days;
    float n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%f",&n);
        days=0;
        while(n>1)
        {
            n=n/2;
            days++;
        }
        printf("%d dias\n",days);
    }
}
