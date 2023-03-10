#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    int m,n,o,p,q;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    scanf("%d %d %d %d %d",&m,&n,&o,&p,&q);
    if(a!=m && b!=n && c!=o && d!=p && e!=q)
        printf("Y\n");
    else
        printf("N\n");
}
