#include<stdio.h>

int main()
{
    int t,k,s,b,a,sc=0,bc=0,ac=0,ssc=0,bsc=0,asc=0,ss,bs,as;
    char name[50];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf(" %[^\n]",name);
        scanf("%d %d %d",&s,&b,&a);
        scanf("%d %d %d",&ss,&bs,&as);
        sc+=s;
        bc+=b;
        ac+=a;
        ssc+=ss;
        bsc+=bs;
        asc+=as;
    }
    printf("Pontos de Saque: %0.2lf %%.\n",(ssc*100.0)/sc);
    printf("Pontos de Bloqueio: %0.2lf %%.\n",(bsc*100.0)/bc);
    printf("Pontos de Ataque: %0.2lf %%.\n",(asc*100.0)/ac);
}
