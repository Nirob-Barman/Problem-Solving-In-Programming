#include<stdio.h>

int main()
{
    int d,m,y;
    scanf("%02d/%02d/%02d",&d,&m,&y);
    printf("%02d/%02d/%02d\n",m,d,y);
    printf("%02d/%02d/%02d\n",y,m,d);
    printf("%02d-%02d-%02d\n",d,m,y);
}
