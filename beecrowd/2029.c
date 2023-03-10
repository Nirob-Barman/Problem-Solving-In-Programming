#include<stdio.h>

int main()
{
    double v,d,area,height;
    while(scanf("%lf %lf",&v,&d)!=EOF)
    {
        area=3.14*(d*d/4);
        height=v/area;
        printf("ALTURA = %0.2lf\n",height);
        printf("AREA = %.02lf\n",area);
    }
}
