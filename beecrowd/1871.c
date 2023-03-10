#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        int sum=a+b,i=0;
        char s[20];
        while(sum!=0)
        {
            if((sum%10)>0)
            {
                s[i]=(sum%10)+'0';
                i++;
            }
            sum=sum/10;
        }
        s[i]='\0';
        int k;
        for(k=i-1;k>=0;k--)
        printf("%c",s[k]);
        printf("\n");

    }
}
