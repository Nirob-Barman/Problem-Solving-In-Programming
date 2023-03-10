#include<stdio.h>

int main()
{
    int t,k,gab,dab,bonas,aa,ab,ac,ba,bb,bc;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&bonas);
        scanf("%d %d %d",&aa,&ab,&ac);
        scanf("%d %d %d",&ba,&bb,&bc);
        dab=(aa+ab)/2;
        gab=(ba+bb)/2;
        if(ac%2==0)
            dab+=bonas;
        if(bc%2==0)
            gab+=bonas;
        if(gab==dab)
            printf("Empate\n");
        else if(dab>gab)
            printf("Dabriel\n");
        else if(gab>dab)
            printf("Guarte\n");
    }
}
