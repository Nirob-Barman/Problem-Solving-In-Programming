#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0)
    {
        if(b%2==0)
            printf("1\n");
        else
            printf("0\n");
    }
    else
    {
        if(b%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
}
