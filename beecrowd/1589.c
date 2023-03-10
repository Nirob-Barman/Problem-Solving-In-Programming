#include<stdio.h>

int main()
{
    int t,k,ra,rb;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&ra,&rb);
        printf("%d\n",ra+rb);
    }
}
