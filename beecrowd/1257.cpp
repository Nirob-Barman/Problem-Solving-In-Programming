#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0,sumx=0,i,j,l;
        scanf("%d",&n);
        char s[50];
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            //printf("%s\n",s);
            l=strlen(s);
            for(j=0;j<l;j++)
            {
                //printf("%d %d %d\n",s[j]-65,i,j);
                sumx+=(s[j]-65)+i+j;
            }
            //sum+=sumx;
            //printf("%d\n",sum);
        }
        printf("%d\n",sumx);
    }
}
