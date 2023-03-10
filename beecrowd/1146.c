#include<stdio.h>

int main()
{
    int number,i;
    while(scanf("%d",&number)!=EOF)
    {
        if(number==0)
            break;
        else
        {
            for(i=1;i<=number;i++)
                {
                    if(i!=number)
                        printf("%d ",i);
                    else
                        printf("%d\n",i);
                }
        }
    }

}
