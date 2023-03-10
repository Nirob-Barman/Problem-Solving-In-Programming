#include<stdio.h>

int main()
{
    int h,m,o,t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d %d",&h,&m,&o);
        if(h<10)
            printf("0%d:",h);
        else
            printf("%d:",h);
        if(m<10)
            printf("0%d",m);
        else
            printf("%d",m);
        if(o==0)
            printf(" - A porta fechou!\n");
        else
            printf(" - A porta abriu!\n");
    }
}
