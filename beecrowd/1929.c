#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b>c && b+c>a && c+a>b || b+c>d && c+d>b && b+d>c || a+c>d && c+d>a && a+d>c || a+b>d && b+d>a && a+d>b)
        printf("S\n");
    else
        printf("N\n");
}
