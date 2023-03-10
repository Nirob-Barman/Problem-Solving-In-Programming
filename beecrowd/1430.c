#include<stdio.h>
#include<string.h>

int main()
{
    char line[200];
    while(scanf("%s",&line) && line[0]!='*')
    {
        char *s;
        s=strtok(line,"/");
        int i,count=0;
        while(s!='\0')
        {
            double sum=0;
            for(i=0;i<strlen(s);i++)
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
            if(sum==1)
                count++;
            s=strtok('\0',"/");
        }
        printf("%d\n",count);
    }
}
