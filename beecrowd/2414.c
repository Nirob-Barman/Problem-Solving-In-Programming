#include<stdio.h>

int main()
{
    int n,max=-1;
    while(scanf("%d",&n)&& n!=0)
    {
        if(n>max)
            max=n;
    }
    printf("%d\n",max);
}
