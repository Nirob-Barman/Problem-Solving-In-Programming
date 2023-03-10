#include<stdio.h>

int main()
{
    int a[20],i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=20-1;i>=0;i--)
    {
        printf("N[%d] = %d\n",(20-1-i),a[i]);
    }
}
