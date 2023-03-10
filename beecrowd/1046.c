#include<stdio.h>

int main()
{
    int start,end;

    scanf("%d %d",&start,&end);

    if(start>12 || end<=12)
    {
        start=start-12;
        end=end+12;
        printf("O JOGO DUROU %d HORA(S)\n",end-start);
    }
    else if(start<12||end>=12)
    {
        printf("O JOGO DUROU %d HORA(S)\n",end-start);
    }

    return 0;
}
