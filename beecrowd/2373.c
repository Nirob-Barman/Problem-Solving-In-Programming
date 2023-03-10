#include<stdio.h>

int main()
{
    int t,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
            sum+=b;
    }
    printf("%d\n",sum);
}
