#include<stdio.h>
#include<math.h>

int main()
{
    double n,a,b;
    scanf("%lf",&n);
    a=n/log(n);
    b=1.25506*a;
    printf("%.01lf %.01lf\n",a,b);
}
