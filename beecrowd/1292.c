#include<stdio.h>
#include<math.h>

const double pi=atan(1.0)*4;

int main()
{
    double y,r;
    r=sin((108*pi)/180)/sin((63*pi)/180);///According to Sine Rule

    while(scanf("%lf",&y)!=EOF)
    {
        printf("%0.10lf\n",y*r);
    }
}
