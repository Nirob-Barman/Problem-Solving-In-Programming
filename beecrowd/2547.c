#include<stdio.h>

int main()
{
    int t,min,max;
    while(scanf("%d %d %d",&t,&min,&max)!=EOF)
    {
    int count=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n>=min && n<=max)
            count++;
    }
    printf("%d\n",count);
    }
}
