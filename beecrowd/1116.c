#include<stdio.h>

int main()
{
    float x,y;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f",&x,&y);
        if(y==0)
           printf("divisao impossivel\n");
        else
            printf("%.1f\n",x/y);
    }
    return 0;
}
