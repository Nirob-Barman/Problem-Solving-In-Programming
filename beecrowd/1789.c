#include<stdio.h>

int main()
{
    int i,n,max;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=max)
                max=a[i];
        }
        if(max<10)
            max=1;
        else if(max>=10 && max<20)
            max=2;
        else if(max>=20)
            max=3;
        printf("%d\n",max);
    }
}
