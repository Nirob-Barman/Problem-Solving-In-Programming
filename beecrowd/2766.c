#include<stdio.h>

int main()
{
    int i;
    char s[101];
    for(i=1;i<=10;i++)
    {
        gets(s);
        if(i==3||i==7||i==9)
            printf("%s\n",s);
    }
}
