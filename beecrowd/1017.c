#include<stdio.h>

int main()
{
    int hours, average_speed;
    float x;

    scanf("%d %d",&hours,&average_speed);
    x = (hours*average_speed)/12.0;

    printf("%.3f\n",x);

    return 0;
}
