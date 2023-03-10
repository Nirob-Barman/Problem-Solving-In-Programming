#include<stdio.h>

int main()
{
    unsigned int n,t,k;
    scanf("%u",&t);
    for(k=0;k<t;k++)
    {
        scanf("%u",&n);
        if(n>=2015)
            printf("%u A.C.\n",n-2014);
        else if(n<2015)
            printf("%u D.C.\n",2015-n);
    }
}
