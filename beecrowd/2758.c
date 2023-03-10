#include<stdio.h>

int main()
{
    float a,b;
    double c,d;
    scanf("%f %f %lf %lf",&a,&b,&c,&d);
    printf("A = %f, B = %f\n",a,b);
    printf("C = %lf, D = %lf\n",c,d);
    printf("A = %.01f, B = %.01f\n",a,b);
    printf("C = %.01lf, D = %.01lf\n",c,d);
    printf("A = %.02f, B = %.02f\n",a,b);
    printf("C = %.02lf, D = %.02lf\n",c,d);
    printf("A = %.03f, B = %.03f\n",a,b);
    printf("C = %.03lf, D = %.03lf\n",c,d);
    printf("A = %.03E, B = %.03E\n",a,b);
    printf("C = %.03lE, D = %.03lE\n",c,d);
    printf("A = %.0f, B = %.0f\n",a,b);
    printf("C = %.0lf, D = %.0lf\n",c,d);
}
