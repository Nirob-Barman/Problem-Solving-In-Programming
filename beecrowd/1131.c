#include<stdio.h>

int main()
{
    int a,b,ac=0,bc=0,abc=0,selection,sc=0;
    while(1)
    {
        scanf("%d %d",&a,&b);
        sc++;
        if(a>b)
            ac++;
        if(a<b)
            bc++;
        if(a==b)
            abc++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&selection);
        if(selection==1)
            continue;
        if(selection==2)
            break;
    }
    printf("%d grenais\n",sc);
    printf("Inter:%d\n",ac);
    printf("Gremio:%d\n",bc);
    printf("Empates:%d\n",abc);
    if(ac>bc)
        printf("Inter venceu mais\n");
    else if(bc>ac)
    {
        printf("Gremio venceu mais\n");
    }
    else
        printf("Não houve vencedor\n");
}
