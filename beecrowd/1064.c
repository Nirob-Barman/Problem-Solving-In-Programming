#include<stdio.h>

int main()
{
    float a[6],s=0.0,x;
    int i,c=0;

    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);

    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            c++;
            s=s+a[i];
        }
    }
    x=s/c;
    printf("%d valores positivos\n",c);
    printf("%.1f\n",x);
}
