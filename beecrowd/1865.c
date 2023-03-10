#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int t,k,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s%d",s,&n);
        //if(s[0]=='T'&&s[1]=='h'&&s[2]=='o'&&s[3]=='r')
        if(strcmp(s,"Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
}
