#include<stdio.h>

int main()
{
    char s[25];
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf(" %[^\n]",s);
        //if(s!="Batman")
            printf("Y\n");
    }
}
