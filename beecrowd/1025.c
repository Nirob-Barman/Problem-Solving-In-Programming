#include<stdio.h>
#include<stdlib.h>

int ascendingorder(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int search(int a[],int l,int item)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]==item)
            return i+1;
    }
    return 0;
}
int main()
{
    int cas=1;
    while(1)
    {
        int n,q,i,j;
        scanf("%d %d",&n,&q);
        if(n==0 && q==0)
            break;
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        qsort(a,n,sizeof(int),ascendingorder);

        printf("CASE# %d:\n",cas);

        int b[q];//Number of query
        for(i=0;i<q;i++)
        {
            scanf("%d",&b[i]);
            int x=search(a,n,b[i]);
            if(x==0)
                printf("%d not found\n",b[i]);
            else
                printf("%d found at %d\n",b[i],x);
        }
        cas++;
    }
}
