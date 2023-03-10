#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double a,b,fibonacci;
    scanf("%d",&n);
    a=(1+sqrt(5))/2;
    b=(1-sqrt(5))/2;
    fibonacci=(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%.01lf\n",fibonacci);
}
