#include<stdio.h>

int main()
{
    int t,i;
    float a,b,c,av;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        av=(a*2+b*3+c*5)/10;
        printf("%.1f\n",av);
    }
}
