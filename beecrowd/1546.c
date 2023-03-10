#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        while(n--)
        {
            int x;
            scanf("%d",&x);
            if(x==1)
                printf("Rolien\n");
            else if(x==2)
                printf("Naej\n");
            else if(x==3)
                printf("Elehcim\n");
            else
                printf("Odranoel\n");
        }
    }
}
