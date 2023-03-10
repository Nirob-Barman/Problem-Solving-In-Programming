#include<stdio.h>

int main()
{
    char s[1000];
    while(scanf("%s",&s)!=EOF)
    {
        int i,opening,closing;
        opening=0;
        closing=0;

        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
                opening++;
            else if(s[i]==')')
            {
                closing++;

                if(opening>0)
                {
                    closing--;
                    opening--;
                }
            }
        }


        if(opening==0 && closing==0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
