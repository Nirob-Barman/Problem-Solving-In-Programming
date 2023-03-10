#include<cstdio>

using namespace std;

int sum(int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        ///printf("%d  %d\n",i,1<<i);
        sum+=(1<<i);
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int row;
        scanf("%d",&row);
        int line=sum(row);
        printf("%d\n",line);
    }
}
