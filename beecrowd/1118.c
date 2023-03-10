#include<stdio.h>

int main()
{
    double x,y;
    int c=1;
    while(c==1)
    {
        while(1)
        {
            scanf("%lf",&x);
            if(x>=0 && x<=10)
                break;
            printf("nota invalida\n");
        }
        while(1)
        {
            scanf("%lf",&y);
            if(y>=0 && y<=10)
                break;
            printf("nota invalida\n");
        }
        x=(x+y)/2;
        printf("media = %.02lf\n",x);
        while(1)
        {
            scanf("%d",&c);
            if(c>=1 && c<=2)
                break;
            printf("novo calculo (1-sim 2-nao)\n");
        }
        printf("novo calculo (1-sim 2-nao)\n");
    }
}
