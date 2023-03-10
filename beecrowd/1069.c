#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",&s);
        int i=0,left=0,right=0;
        while(s[i]!='\0')
        {
            if(s[i]=='<')
                left++;
            if(s[i]=='>')
            {
                if(left>0)
                {
                    right++;
                    left--;
                }
            }

            i++;
        }
        printf("%d\n",right);
    }
}
