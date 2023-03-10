#include<stdio.h>

int main()
{
    int t,k,c=0,r=0,s=0,n;
    char ch;
    double rp,cp,sp;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %c",&n,&ch);
        if(ch=='R')r+=n;
        else if(ch=='C')c+=n;
        else if(ch=='S')s+=n;
    }
    t=r+c+s;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    cp=c*100.0/t;
    printf("Percentual de coelhos: %.02lf %%\n",cp);
    rp=r*100.0/t;
    printf("Percentual de ratos: %.02lf %%\n",rp);
    sp=s*100.0/t;
    printf("Percentual de sapos: %.02lf %%\n",sp);

    return 0;
}
