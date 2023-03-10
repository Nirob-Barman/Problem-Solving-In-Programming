#include<stdio.h>

int main()
{
    int a,b,c,x,y,z,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);

    if(a<x)
        sum+=x-a;
    if(b<y)
        sum+=y-b;
    if(c<z)
        sum+=z-c;
    printf("%d\n",sum);
}
