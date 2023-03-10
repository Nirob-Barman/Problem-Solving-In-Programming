#include<stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int i,c=0,num;
        for(i=n;i<=m;i++)
        {
            int a[10]={0};

            num=i;

            while(num!=0)
            {
                if(a[num%10]==1)    ///if repeated digits
                    break;
                a[num%10]=1;
                num=num/10;
            }
            if(num==0)
                c++;
        }
        printf("%d\n",c);
    }
}
