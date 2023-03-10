#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,j,swap;
    while(scanf("%d",&t)!=EOF)
    {
        char s[t][20],temp[20];
        int a[t];
        for(i=0;i<t;i++)
            scanf("%s %d",s[i],&a[i]);
        //for(i=0;i<t;i++)
            //printf("%s %d",s[i],a[i]);
        for(i=0;i<t-1;i++)
        {
            for(j=0;j<t-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;

                    strcpy(temp,s[j]);
                    strcpy(s[j],s[j+1]);
                    strcpy(s[j+1],temp);
                }
            }
        }
        for(i=0;i<t;i++)
        {
            if(i==t-1)
                printf("%s\n",s[i]);
            else
                printf("%s ",s[i]);
        }
    }
}
