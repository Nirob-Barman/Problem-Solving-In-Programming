#include<stdio.h>

int main()
{
    int l,i;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(c>=97 && c<=122)
        {
            if(c+13>122)
                c=c-13;
            else
                c=c+13;
            printf("%c",c);
        }
        else if(c>=65 && c<=90)
        {
            if(c+13>90)
                c=c-13;
            else
                c=c+13;
            printf("%c",c);
        }
        else
            printf("%c",c);
    }
}
