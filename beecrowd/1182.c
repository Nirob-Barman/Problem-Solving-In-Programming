#include<stdio.h>

int main()
{
    int x,y,l;
    double sum=0.0,a[12][12];
    char c[2];
    scanf("%d %s",&l,c);
    for(x=0;x<12;x++)
    {
        for(y=0;y<12;y++)
        {
            scanf("%lf",&a[x][y]);
            if(y==l)
                sum+=a[x][y];
        }
    }
    if(c[0]=='S')
        printf("%0.1lf\n",sum);
    else if(c[0]=='M')
    {
        sum=sum/12.0;
        printf("%0.1lf\n",sum);
    }
}
