#include<iostream>
#include<algorithm>

using namespace std;

int linearsearch(int a[],int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==item)
            return i+1;
    }
    return 0;
}

int main()
{
    int n,q,cas=1;
    while(scanf("%d %d",&n,&q),(n|q))
    {
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        ///for(int i=0;i<n;i++)
            ///printf("%d\n",a[i]);
        printf("CASE# %d:\n",cas);
        for(int i=0;i<q;i++)
        {
            int item;
            scanf("%d",&item);
            int check=linearsearch(a,n,item);

            if(check==0)
                printf("%d not found\n",item);
            else
                printf("%d found at %d\n",item,check);
        }
        cas++;
    }
}
