#include<stdio.h>

int main()
{
    int a;float b;char ch,s[50];
    while(scanf("%d %f %c %[^\n]",&a,&b,&ch,s)!=EOF)
    {
        printf("%d%0.6f%c%s\n",a,b,ch,s);
        printf("%d\t%0.6f\t%c\t%s\n",a,b,ch,s);
        printf("%10d%10.6f%10c%10s\n",a,b,ch,s);
    }
}
