#include<stdio.h>
#include<math.h>

int main()
{
    int r,l;
    scanf("%d %d",&r,&l);
    double area=1.333333333*3.1415*(pow(r,3));
    ///printf("%lf\n",area);
    area=l/area;
    printf("%d\n",(int)area);
}
