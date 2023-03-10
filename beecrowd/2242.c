#include<stdio.h>
#include<string.h>

int main()
{
    char s[60],y[60],z[60];

    int i,j=0;
    scanf("%s",s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            y[j]=s[i];
            j++;
        }
    }
    y[j]='\0';
    j=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            z[j]=s[i];
            j++;
        }
    }
    z[j]='\0';

    if(strcmp(y,z)==0)
        printf("S\n");
    else
        printf("N\n");


}
