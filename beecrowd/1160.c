#include<stdio.h>

int main()
{
    int t,k,c,a,b;
    double ga,gb;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        c=0;
        scanf("%d %d %lf %lf",&a,&b,&ga,&gb);
        while(a<=b)
        {
            a+=((a*ga)/100);
            b+=((b*gb)/100);
            //printf("%d %d\n",a,b);
            c++;
            if(c>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(c<=100)
        {
            printf("%d anos.\n",c);
        }
    }
}
