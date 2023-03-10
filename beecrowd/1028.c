#include<stdio.h>

int main()
{
    int t,k,a,b;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d",&a,&b);
        while(a!=b)
        {
            if(a>b)
            {
                a-=b;
                printf("%d\n",a);
            }
            else
            {
                b-=a;
                printf("%d\n",b);
            }
        }
        printf("%d\n",a);
    }
}
