#include<stdio.h>
#include<string.h>

int main()
{
    int i,sum;
    char s[8];
    for(i=0;i<3;i++)
    {
        sum=0;
        while(1)
        {
            gets(s);
            if(s[0]=='c')
                break;
            else
            {
                if(s[0]=='-')
                {
                    if(s[1]=='-')
                    {
                        if(s[2]=='-')
                            sum+=0;
                        else
                            sum+=1;
                    }
                    else if(s[1]=='*')
                    {
                        if(s[2]=='-')
                            sum+=2;
                        else
                            sum+=3;
                    }
                }
                else if(s[0]=='*')
                {
                    if(s[1]=='-')
                    {
                        if(s[2]=='-')
                            sum+=4;
                        else
                            sum+=5;
                    }
                    else if(s[1]=='*')
                    {
                        if(s[2]=='-')
                            sum+=6;
                        else
                            sum+=7;
                    }
                }
            }
        }
        printf("%d\n",sum);
    }
}
