#include<stdio.h>

int main()
{
    int t,k,a,maxstorage;
    float b,max=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %f",&a,&b);
        if(b>max)
        {
            max=b;
            maxstorage=a;
        }
    }
    if(max<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",maxstorage);
}
