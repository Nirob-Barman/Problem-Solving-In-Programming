#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,b;
    int i,j;
    char s[20];

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(b>=0 && b<=9)
        {
            s[1]='0';
            s[0]=b+'0';
        }
        else if(b>=10 && b<=99)
        {
            s[0]=(b%10)+'0';
            b=b/10;
            s[1]=(b%10)+'0';
        }
        s[2]='.';

        i=3;
        int count=0;
        while(a!=0)
        {
            if(count==3)
            {
                s[i]=',';
                i++;
                count=0;
            }
            else
            {
                s[i]=(a%10)+'0';
                a/=10;
                i++;
                count++;
            }
        }
        s[i]='\0';

        int l;
        l=strlen(s);
        ///printf("%d\n",l);

        printf("%s\n",s);

        for(i=0;i<l/2;i++)
        {
            ///printf("%d %c\n",i,s[i]);
            char c=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=c;
        }

        printf("$%s\n",s);

    }

}
