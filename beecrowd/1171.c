#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[2002]={0};
    for(i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    for(i=1;i<=2000;i++)
    {
        if(a[i]>0)
            printf("%d aparece %d vez(es)\n",i,a[i]);
    }
}
