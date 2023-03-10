#include<stdio.h>

int main()
{
    float R;
    double VOLUME,pi = 3.14159;

    scanf("%f",&R);

    VOLUME = (4/3.0)*pi*(R*R*R);

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}
