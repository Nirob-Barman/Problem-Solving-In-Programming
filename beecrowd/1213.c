#include<stdio.h>

int main()
{
    int l,n,c;
    while(scanf("%d",&n)!=EOF)
    {
        l=1;
        c=1;
        while(l%n!=0)
        {
            printf("ln=%d\n",l%n);
            l=(10*l+1)%n;
            printf("l=%d\n",l);
            c++;
            printf("c=%d\n",c);
        }
        printf("%d\n",c);
    }
}
