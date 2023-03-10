#include<stdio.h>

int main()
{
    double n;
    int i;
    scanf("%lf",&n);
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.04lf\n",i,n);
        n/=2;
    }
}
