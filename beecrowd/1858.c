#include<stdio.h>

int main()
{
    int i,n,count,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min=a[0];
    count=0;

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            count=i;
        }
    }
    printf("%d\n",count+1);
}
