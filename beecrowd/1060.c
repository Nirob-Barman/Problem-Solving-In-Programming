#include<stdio.h>

int main()
{
    int a,b,g,d,e,f,c=0;
    scanf("%d%d%d%d%d%d",&a,&b,&g,&d,&e,&f);

    if(a>0)
        c++;
    if(b>0)
        c++;
    if(g>0)
        c++;
    if(d>0)
        c++;
    if(e>0)
        c++;
    if(f>0)
        c++;

    printf("%d valores positivos\n",c);
}
