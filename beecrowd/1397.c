#include<stdio.h>

int main()
{
    int t;
    while(scanf("%d",&t) && t!=0)
    {
        int x=0,y=0;
        while(t--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if(a>b)
                x++;
            else if(a<b)
                y++;
        }
        printf("%d %d\n",x,y);
    }
}
