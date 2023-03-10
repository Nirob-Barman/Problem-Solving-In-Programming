#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int l,i,j;
    char s[50];
    while(gets(s)!='\0')
    {
        l=strlen(s);
        j=0;
        for(i=0;i<l;i++)
        {
            if(s[i]!=' ')
            {
                j++;
                //if(s[i]>=96 && s[i]<=122 && j%2==1)
                if(islower(s[i]) && j%2==1)
                    s[i]-=32;
                //else if(s[i]>=65 && s[i]<=90 && j%2==0)
                else if(isupper(s[i]) && j%2==0)
                    s[i]+=32;
            }
        }
        printf("%s\n",s);
    }
}
