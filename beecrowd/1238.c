#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,la,lb,t;
    char a[50],b[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",a,b);
        la=strlen(a);
        lb=strlen(b);
        if(la>=lb)
            l=la;
        else
            l=lb;
        for(i=0;i<l;i++)
        {
            if(i<la)
                printf("%c",a[i]);
            if(i<lb)
                printf("%c",b[i]);
        }
        printf("\n");
    }
}
