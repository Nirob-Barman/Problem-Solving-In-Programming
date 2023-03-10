#include<stdio.h>
#include<string.h>

int main()
{
    int la,lb,l,i,t,m,count;
    char a[1000],b[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",a,b);
        la=strlen(a);
        lb=strlen(b);
        if(la<lb)
            printf("nao encaixa\n");
        else if(la>=lb)
        {
            l=la-lb;
            m=0;
            count=0;
            for(i=l;i<la;i++)
            {
                if(a[i]==b[m])
                    count++;
                m++;
            }
            if(count==lb)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
}
