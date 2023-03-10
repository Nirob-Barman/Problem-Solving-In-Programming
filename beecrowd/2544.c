#include<stdio.h>
#include<math.h>

int main()
{
    int n,value;
    while(scanf("%d",&n)!=EOF)
    {
        value=log2(n);
        printf("%d\n",value);
    }
}
