#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,r;
    char s[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        scanf("%d",&r);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]-r<65)
                printf("%c",s[i]+26-r);
            else
                printf("%c",s[i]-r);
        }
        printf("\n");
    }
}
