#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,fr,fc,sr,sc,i,j;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==1)
                {
                    fr=i;
                    fc=j;
                }
                else if(a[i][j]==2)
                {
                    sr=i;
                    sc=j;
                }
            }
        }
        int sum=fabs(fr-sr)+fabs(fc-sc);
        printf("%d\n",sum);
    }
}
