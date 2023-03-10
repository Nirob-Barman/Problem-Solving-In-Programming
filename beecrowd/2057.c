#include<stdio.h>

int main()
{
    int s,t,f,localtime;
    scanf("%d %d %d",&s,&t,&f);
    localtime=s+t+f;
    if(localtime<0)
        localtime=24+localtime;
    //printf("%d\n",localtime%24);
    if(localtime>=24)
        localtime=localtime-24;
    printf("%d\n",localtime);
}
