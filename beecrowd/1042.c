#include<stdio.h>

int main()
{
    int a,b,c,p,q,r,low,storage,high;

    scanf("%d %d %d",&p,&q,&r);
    a=p;
    b=q;
    c=r;

    if(a>b)
    {
        storage=a;
        low=b;
    }
    else
    {
        storage=b;
        low=a;
    }
    if(storage>c)
    {
        high=storage;
        if(low>c)
        {
            storage=low;
            low=c;
        }
        else
        {
            storage=c;
        }
    }
    else
    {
        high=c;
    }
    printf("%d\n%d\n%d\n",low,storage,high);
    printf("\n%d\n%d\n%d\n",p,q,r);
}
