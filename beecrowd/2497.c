#include<stdio.h>

int main()
{
    int n,cas=1;
    while(scanf("%d",&n) && n>=0)
    {
        printf("Experiment %d: %d full cycle(s)\n",cas,n/2);
        cas++;
    }
}
