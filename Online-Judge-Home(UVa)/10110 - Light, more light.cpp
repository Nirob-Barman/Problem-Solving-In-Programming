#include<bits/stdc++.h>

int main()
{
    unsigned int n,s;
    while(scanf("%u",&n)!=EOF && n!=0)
    {
        s=sqrt(n);
        s=s*s;
        if(s==n)
            printf("yes\n");
        else
            printf("no\n");
    }
}
