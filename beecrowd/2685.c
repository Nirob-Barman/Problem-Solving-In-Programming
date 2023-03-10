#include<stdio.h>

int main()
{
    int degree;
    while(scanf("%d",&degree)!=EOF)
    {
        if(degree>=0 && degree<90 || degree==360)
            printf("Bom Dia!!\n");
        else if(degree>=90 && degree<180)
            printf("Boa Tarde!!\n");
        else if(degree>=180 && degree<270)
            printf("Boa Noite!!\n");
        else
            printf("De Madrugada!!\n");
    }
}
