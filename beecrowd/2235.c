#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || b==c || c==a)
        printf("S\n");
    else if(a+b==c||b+c==a||c+a==b)
        printf("S\n");
    else
        printf("N\n");
}
