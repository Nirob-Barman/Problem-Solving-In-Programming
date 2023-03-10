#include<stdio.h>

int main()
{
    int i;
    float sum=0.0;
    for(i=1;i<=100;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("%.2f\n",sum);
}
