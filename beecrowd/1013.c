#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,grt1,great;

    scanf("%d %d %d",&a,&b,&c);

    grt1= (a+b+ abs(a-b))/2;
    great= (grt1+c+ abs(grt1-c))/2;

    printf("%d eh o maior\n",great);

    return 0;
}
