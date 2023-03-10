#include<stdio.h>

int main()
{
    int a,b,t,ic=0,oc=0;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        if(a>=10&&a<=20)
        {
            ic++;
        }
        else
        {
            oc++;
        }
    }
    printf("%d in\n",ic);
    printf("%d out\n",oc);
}
