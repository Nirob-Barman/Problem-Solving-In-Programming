#include<stdio.h>
#include<string.h>

int main()
{
    char s[205];
    while(scanf("%s",&s) && strcmp(s,"*"))
    {
        float sum=0.0;
        int count=0;
        int i;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]!='/')
            {
                if(s[i]=='W')
                    sum+=1.0;
                if(s[i]=='H')
                    sum+=(1/2.0);
                if(s[i]=='Q')
                    sum+=(1/4.0);
                if(s[i]=='E')
                    sum+=(1/8.0);
                if(s[i]=='S')
                    sum+=(1/16.0);
                if(s[i]=='T')
                    sum+=1/32.0;
                if(s[i]=='X')
                    sum+=(1/64.0);
            }
            else if(s[i]=='/')
            {
                if(sum>0)
                    if(sum==1)
                    count++;
                sum=0;
            }
        }
        printf("%d\n",count);
    }
}
