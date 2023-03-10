#include<stdio.h>
#include<string.h>

int main()
{
    int t,k;
    long long int c,d,sum;
    char p[101],q[10],r[101],s[10];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%s %s %s %s",p,q,r,s);
        scanf("%lld %lld",&c,&d);
        sum=c+d;
        if(q[0]=='P')
        {
            if(sum%2==0)
                printf("%s\n",p);
            else
                printf("%s\n",r);
        }
        else
        {
            if(sum%2==0)
                printf("%s\n",r);
            else
                printf("%s\n",p);
        }
    }
}
