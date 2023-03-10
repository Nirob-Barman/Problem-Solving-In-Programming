#include<stdio.h>

int main()
{
    int t,k,a,b;
    double sum=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&a,&b);
        if(a==1001)
            sum+=1.50*b;
        else if(a==1002)
            sum+=2.50*b;
        else if(a==1003)
            sum+=3.50*b;
        else if(a==1004)
            sum+=4.50*b;
        else if(a==1005)
            sum+=5.50*b;
    }
    printf("%0.2lf\n",sum);
}
