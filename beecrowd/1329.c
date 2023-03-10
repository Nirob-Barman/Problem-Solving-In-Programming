#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        int mary=0,john=0;
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                mary++;
            else
                john++;
        }
        printf("Mary won %d times and John won %d times\n",mary,john);
    }
}
