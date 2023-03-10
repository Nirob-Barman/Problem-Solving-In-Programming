#include<stdio.h>

int main()
{
    double a=234.345, b=45.698;
    printf("%.06lf - %.06lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.01lf - %.01lf\n",a,b);
    printf("%.02lf - %.02lf\n",a,b);
    printf("%.03lf - %.03lf\n",a,b);
    printf("%e - %e\n",a,b);
    printf("%E - %E\n",a,b);
    printf("%.03lf - %.03lf\n",a,b);
    printf("%.03lf - %.03lf\n",a,b);
}
