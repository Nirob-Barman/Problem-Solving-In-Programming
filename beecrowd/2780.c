#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=800)
        printf("1\n");
    else if(n>800 && n<=1400)
        printf("2\n");
    else if(n>1400 && n<=2000)
        printf("3\n");
}
