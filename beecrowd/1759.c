#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i!=n)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
}
