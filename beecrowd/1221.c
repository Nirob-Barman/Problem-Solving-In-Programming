#include<stdio.h>
#include<math.h>

int main()
{
    int t,k,n,sort,i;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        sort=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sort=1;
                break;
            }
        }
        if(sort==0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
}
