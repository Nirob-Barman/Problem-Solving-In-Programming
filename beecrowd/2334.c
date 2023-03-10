#include<stdio.h>

int main()
{
    unsigned long long int n;
    while(scanf("%llu",&n)&&n!=-1)
    {
        if(n==0)
            printf("0\n");
        else
            printf("%llu\n",n-1);
    }
}
