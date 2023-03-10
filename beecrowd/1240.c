#include<stdio.h>
#include<math.h>

int numofdigits(unsigned int n);
int numofdigits(unsigned int n)
{
    int digit=0;
    while(n!=0)
    {
        n/=10;
        digit++;
    }
    return digit;
}

int main()
{
    unsigned int x,y,valor,z;
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%u %u",&x,&y);
        z=numofdigits(y);
        //printf("%u\n",z);
        z=ceil(pow(10,z));
        //printf("%lld\n",z);
        valor=x%z;
        //printf("%u\n",valor);
        if(valor==y)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
}
