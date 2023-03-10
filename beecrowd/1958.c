#include<stdio.h>

int main()
{
    long double x;
    char s[120];
    scanf("%lE",&x);
    sprintf(s,"%lE",x);
    if(s[0]!='-')
        printf("+");
    printf("%.4lE\n",x);
}
