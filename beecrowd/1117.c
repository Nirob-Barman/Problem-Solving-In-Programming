#include<stdio.h>

int main()
{
    double n,c=0.0,sum=0.0,avg;
    while(scanf("%lf",&n)!=EOF)
    {
        if(n>=0 && n<=10)
        {
            c++;
            sum=sum+n;
            if(c==2)
            {
                avg=sum/(float)2;
                printf("media = %.02lf\n",avg);
                break;
            }
        }
        else
            printf("nota invalida\n");
    }
}
