#include<stdio.h>

int main()
{
    double n,ans=0;
    scanf("%lf",&n);
    int k;
    for(k=0;k<n;k++)
    {
        ans+=2;
        //printf("%lf\n",ans);
        ans=1/ans;
        //printf("%lf\n",ans);
        //printf("\n");
    }
    ans+=1;
    printf("%.10lf\n",ans);
}
