#include<stdio.h>

int main()
{
    unsigned a,b;
    while(scanf("%u %u",&a,&b)!=EOF && a!=0 && b!=0)
    {
        printf("%u\n",a*b);
    }
}
