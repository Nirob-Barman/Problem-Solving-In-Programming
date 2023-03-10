#include<stdio.h>

int main()
{
    double n,ans=0;
    scanf("%lf",&n);
    int k;
    for(k=0;k<n;k++)
    {
        ans+=6;
        //printf("%lf\n",ans);
        ans=1/ans;
        //printf("%lf\n",ans);
        //printf("\n");
    }
    ans+=3;
    printf("%.10lf\n",ans);
}
