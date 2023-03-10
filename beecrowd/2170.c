#include<stdio.h>

int main()
{
    int cas=1;
    double x,y;
    while(scanf("%lf %lf",&x,&y)!=EOF)
    {
        double z=y-x;
        printf("Projeto %d:\n",cas);
        printf("Percentual dos juros da aplicacao: %0.2lf %%\n\n",(z/x)*100);
        cas++;
    }
}
