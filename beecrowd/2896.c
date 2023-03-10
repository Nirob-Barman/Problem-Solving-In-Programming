#include<stdio.h>

int main()
{
    int t,k,a,b;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",(a%b)+(a/b));
    }
}
