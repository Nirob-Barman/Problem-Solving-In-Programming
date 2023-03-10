#include<stdio.h>

int main()
{
    int t,k,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        if(n<=8000)
            printf("Inseto!\n");
        else if(n>8000)
            printf("Mais de 8000!\n");
    }
}
