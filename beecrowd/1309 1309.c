#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    while(scanf("%s",&s)!=EOF)
    {
        int i,j,d,l,count;
        scanf("%d",&d);
        l=strlen(s);

        char ss[20];
        j=0;
        count=0;
        for(i=l-1;i>=0;)
        {
            if(count==3)
            {
                ss[j]=',';
                j++;
                count=0;
            }
            else
            {
                ss[j]=s[i];
                j++;
                i--;
                count++;
            }
        }
        ss[j]='\0';
        ///printf("%s\n",ss);
        l=strlen(ss);
        for(i=0;i<l/2;i++)
        {
            char c=ss[i];
            ss[i]=ss[l-i-1];
            ss[l-i-1]=c;
        }
        printf("$%s",ss);
        if(d<10)
            printf(".0%d\n",d);
        else
            printf(".%d\n",d);
    }
}
