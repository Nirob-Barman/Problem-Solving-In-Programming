#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        if(n<m)
            printf("1\n");
        else if(n%m==0)
            printf("%d\n",n/m);
        else
            printf("%d\n",n/m+1);
    }
}
