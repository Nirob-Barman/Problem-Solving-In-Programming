r i#include<stdio.h>

int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++)
    {
        if(i%x!=0)
            printf("%d ",i);
        else if(i%x==0)
            printf("%d\n",i);
    }
}
