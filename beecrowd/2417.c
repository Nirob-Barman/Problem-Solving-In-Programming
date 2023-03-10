#include<stdio.h>

int main()
{
    int a,b,c;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);

    int m=a*3+b;
    int n=x*3+y;

    if(m==n && c==z)
        printf("=\n");
    else if(m>n)
        printf("C\n");
    else if(m==n)
    {
        if(c>z)
            printf("C\n");
        else
            printf("F\n");
    }
    else
        printf("F\n");


}
