#include<stdio.h>

int main()
{
    int x,z,i,a=1,sum=0;
    scanf("%d %d",&x,&z);
    while(x>=z)
        scanf("%d",&z);
    for(i=x;i<=z;i++)
    {
        sum=sum+i;
        if(sum>z)
            break;
        a++;
    }
    printf("%d\n",a);
}
