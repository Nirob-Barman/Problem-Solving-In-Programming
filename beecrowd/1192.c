#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        char c;
        scanf("%d%c%d",&a,&c,&b);
        ///printf("%d%d%d\n",a,c,b);
        if(a==b)
            printf("%d\n",a*b);
        else if(c>=65 && c<=90)
            printf("%d\n",b-a);
        else
            printf("%d\n",a+b);
    }
}
