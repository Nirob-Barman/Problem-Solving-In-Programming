#include<stdio.h>
#include<math.h>

int main()
{
    int p,n,i,max,count=1;
    scanf("%d %d",&p,&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        max=fabs(a[i]-a[i-1]);
        if(max<=p)
        {
            count++;
        }
    }
    if(count==n)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
}
