#include<stdio.h>
#include<math.h>

int main()
{
    int t,k,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        if(n%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
