#include<stdio.h>

int main()
{
    int i,n,max,a;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>max)
                max=a;
        }
        if(max<10)
            a=1;
        else if(max>=10 && max<20)
            a=2;
        else if(max>=20)
            a=3;
        printf("%d\n",a);
    }
}
