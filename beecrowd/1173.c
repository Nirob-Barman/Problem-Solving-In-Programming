#include<stdio.h>

int main()
{
    int a[00],point,i;
    scanf("%d",&point);
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,point);
        point+=point;
    }
}
