#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d",&a)!=EOF && a!=0)
    {
        scanf("%d %d",&b,&c);
        d=(a*b*100)/c;
        d=sqrt(d);
        printf("%d\n",d);
    }
}
