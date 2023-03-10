#include<stdio.h>

int main()
{
    char s[10];
    int e=0,l=0,p=0,n;
    while(scanf("%s",s) && s[0]!='A')
    {
        scanf("%d",&n);
        ///printf("%s %d\n",s,n);
        if(s[0]=='S')
        {


                l+=n;
                p+=1;

        }
        else
        {


                l-=n;
                p-=1;

        }
    }
    printf("%d\n%d\n",l,p);
}
