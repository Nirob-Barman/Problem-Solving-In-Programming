#include<stdio.h>

int main()
{
    int t,k,b=0,c=0,d=0,e=0,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            b++;
        if(a[i]%3==0)
            c++;
        if(a[i]%4==0)
            d++;
        if(a[i]%5==0)
            e++;
    }
    printf("%d Multiplo(s) de 2\n",b);
    printf("%d Multiplo(s) de 3\n",c);
    printf("%d Multiplo(s) de 4\n",d);
    printf("%d Multiplo(s) de 5\n",e);
}
