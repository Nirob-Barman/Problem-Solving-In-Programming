#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d;
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lf %lf",&a,&b);
        c=log10(a);
        d=c*b;
        d=floor(d);
        printf("%.0lf\n",d+1);
    }
}
