#include<stdio.h>

int main()
{
    double min;
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        double a[n];
        for(i=0;i<n;i++)
            scanf("%lf",&a[i]);
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<min)
                min=a[i];
        }
        printf("%.02lf\n",min);
    }
}
