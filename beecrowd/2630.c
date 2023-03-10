#include<stdio.h>
#include<string.h>

int main()
{
    int t,k,a,b,c,m;
    char s[15];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf(" %[^\n]",s);
        scanf("%d %d %d",&a,&b,&c);
        if((s[0]=='m'&& s[1]=='i' && s[2]=='n'))
        {
            if(a<=b && a<=c)
                m=a;
            if(b<=a && b<=c)
                m=b;
            if(c<=a && c<=b)
                m=c;
            printf("Caso #%d: %d\n",k,m);
        }
        else if(s[0]=='m'&&s[1]=='e'&&s[2]=='a'&&s[3]=='n')
        {
            printf("Caso #%d: %d\n",k,(a+b+c)/3);
        }
        else if((s[0]=='m'&& s[1]=='a' && s[2]=='x'))
        {
            if(c>a && c>b)
                m=c;
            if(a>b && a>c)
                m=a;
            if(b>a && b>c)
                m=b;
            printf("Caso #%d: %d\n",k,m);
        }
        else
        {
            m=.30*a+.59*b+.11*c;
            printf("Caso #%d: %d\n",k,m);
        }
    }
}
