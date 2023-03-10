#include<stdio.h>

int main()
{
    int x,y,l;
    double sum=0.0,a[12][12];
    char c;
    scanf("%c",&c);
    for(x=0;x<12;x++)
    {
        for(y=0;y<12;y++)
        {
            scanf("%lf",&a[x][y]);
            if(y>x && (x+y)<11)
                sum+=a[x][y];
        }
    }
    if(c=='S')
        printf("%0.1lf\n",sum);
    else if(c=='M')
    {
        sum=sum/30;
        printf("%0.1lf\n",sum);
    }
}
