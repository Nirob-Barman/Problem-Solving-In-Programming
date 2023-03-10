#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    if(n%2==0)
    {
        n=n+1;
    }
    for(i=n;i<n+11;i+=2)//i<n+12 will be the correct answer
    {
        printf("%d\n",i);
    }
}
