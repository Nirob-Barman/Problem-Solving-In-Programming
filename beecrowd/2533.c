#include<stdio.h>

int main()
{
    int n,c,t,sn,sc;
    while(scanf("%d",&t)!=EOF)
    {
        sn=0,sc=0;
        while(t--)
        {
            scanf("%d %d",&n,&c);
            sn+=n*c;
            sc+=c;
        }
        printf("%0.4f\n",(sn/(sc*100.0)));
    }
}
