#include<stdio.h>

int main()
{
    int h,m,delay;
    while(scanf("%02d:%02d",&h,&m)!=EOF)
    {if(h<7 || h==7 && m==0)
    delay=0;
    else
    {
        delay=(h-7)*60+m;
    }
    printf("Atraso maximo: %d\n",delay);}
}
