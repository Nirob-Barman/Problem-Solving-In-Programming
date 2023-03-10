#include<stdio.h>

int main()
{
    int a,b;
    float i,j;
    for(i=0.0;i<2.1;i+=0.2)
    {
        for(j=1.0;j<=3.0;j++)
        {
            if(i>0 && i<1 || i>1 && i<2)
                printf("I=%0.1lf J=%0.1lf\n",i,i+j);
            else
            {
                a=i;
                b=i+j;
                printf("I=%d J=%d\n",a,b);
            }
        }
    }
}
