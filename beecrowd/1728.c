#include<stdio.h>
#include<string.h>


void reverse(char *x, int begin, int end)
{
   char c;

   if (begin >= end)
      return;

   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;

   reverse(x, ++begin, --end);
}

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
            reverse(token,0,strlen(token)-1);
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
