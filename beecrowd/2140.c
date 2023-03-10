#include<stdio.h>

int main()
{
    int a,b,dif,count=0;
    while(scanf("%d %d",&a,&b)!=EOF && a!=0 && b!=0)
    {
        count=0;
        dif=0;
        dif=b-a;
        if(dif>=100)
        {
            dif-=100;
            count++;
        }
        if(dif>=50 && dif<100)
        {
            dif-=50;
            count++;
        }
        if(dif>=20 && dif<50)
        {
            dif-=20;
            count++;
        }
        if(dif>=10 && dif<20)
        {
            dif-=10;
            count++;
        }
        if(dif>=5 && dif<10)
        {
            dif-=5;
            count++;
        }
        if(dif>=2 && dif<5)
        {
            dif-=2;
            count++;
        }
        if(count==2 && dif==0)
            printf("possible\n");
        else
            printf("impossible\n");
    }
}
