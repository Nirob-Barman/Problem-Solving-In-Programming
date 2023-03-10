#include<stdio.h>

long long main()
{
    long long a[5],i,ec=0,oc=0,pc=0,nc=0;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            ec++;
        }
        if(a[i]%2==1)
        {
            oc++;
        }
        if(a[i]>0)
        {
            pc++;
        }
        if(a[i]<0)
        {
            nc++;
        }
    }
    prlong longf("%d valor(es) par(es)\n",ec);
    prlong longf("%d valor(es) impar(es)\n",oc);
    prlong longf("%d valor(es) positivo(s)\n",pc);
    prlong longf("%d valor(es) negativo(s)\n",nc);
}
