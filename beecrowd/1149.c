#include<stdio.h>

int main()
{
    int a,n,i,sum=0;
    scanf("%d %d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+a++;//a++ or a+i;
    }
    printf("%d\n",sum);
}
