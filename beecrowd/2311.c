#include<stdio.h>

int main()
{
    int t,k,i;
    char s[25];
    double min,max,sum,degree;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        //scanf(" %[^\n]",s);
        scanf("%s",s);
        scanf("%lf",&degree);
        double a[7];
        for(i=0;i<7;i++)
            scanf("%lf",&a[i]);
        //for(i=0;i<7;i++)
            //printf("%lf\n",a[i]);
        max=a[0],min=a[0],sum=0.0;
        for(i=0;i<7;i++)
        {
            if(a[i]>max)
                max=a[i];
            else if(a[i]<min)
                min=a[i];
            sum+=a[i];
        }
        //printf("%lf %lf %lf\n",max,min,sum-max-min);
        printf("%s ",s);
        printf("%.02lf\n",(sum-max-min)*degree);
    }
}
