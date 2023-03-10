#include<stdio.h>

int main()
{
    int a[1000],i,min,n,location;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            location=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",location);
}
