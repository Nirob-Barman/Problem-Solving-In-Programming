#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[2500],s[50][50],temp[50],*pch;
        gets(str);

        pch=strtok(str," ");
        int l=0;
        while(pch!='\0')
        {
            strcpy(s[l],pch);
            pch=strtok('\0'," ");
            l++;
        }

        *str='\0';

        for(i=0;i<l-1;i++)
        {
            for(j=0;j<l-i-1;j++)
            {
                if(strlen(s[j])<strlen(s[j+1]))
                {
                    strcpy(temp,s[j]);
                    strcpy(s[j],s[j+1]);
                    strcpy(s[j+1],temp);
                }
            }
        }

        for(i=0;i<l;i++)
        {
            if(i==l-1)
                strcat(str,s[i]);
            else
            {
                strcat(str,s[i]);
                strcat(str," ");
            }
        }
        printf("%s\n",str);


    }
}
