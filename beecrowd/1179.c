#include<stdio.h>

int main()
{
    int i,a[15],p[5],imp[5],e=0,o=0,num;
    for(i=0;i<15;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            p[e]=num;
            e++;
        }
        else if(num%2==1)
        {
            imp[o]=num;
            o++;
        }
        if(e==5)
        {
            for(int j=0;j<5;j++)
                {printf("par[%d] = %d\n",j,p[j]);
            p[j]='\0';}
            e=0;
        }
        if(o==5)
        {
            for(int j=0;j<5;j++)
                {printf("impar[%d] = %d\n",j,imp[j]);
            imp[j]='\0';}
            o=0;
        }
    }
    for(int j=0;j<5;j++)
    {
        if(imp[j]=='\0')
            break;
        printf("impar[%d] = %d\n",j,imp[j]);
    }
    for(int j=0;j<5;j++)
    {
        if(p[j]=='\0')
            break;
        printf("par[%d] = %d\n",j,p[j]);
    }

}
