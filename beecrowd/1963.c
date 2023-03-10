#include<stdio.h>

int main()
{
    double a,b,sum;
    scanf("%lf %lf",&a,&b);
    sum=(b-a);
    sum=(sum*100)/a;
    printf("%0.2lf%%\n",sum);
}
