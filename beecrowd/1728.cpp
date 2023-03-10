#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int a=-1,b=-1,c=-1;
    char s[25];
    while(scanf("%s",&s)!=EOF)
    {
        ///puts(s);
        char *token;
        token=strtok(s,"+=");
        while(token!='\0')
        {
            reverse(token,token+strlen(token));
            a=b;
            b=c;
            c=atoi(token);
            token=strtok('\0',"+=");
        }
        ///printf("%d %d %d\n",a,b,c);
        if(a+b==c)
            printf("True\n");
        else
            printf("False\n");
    }
}
