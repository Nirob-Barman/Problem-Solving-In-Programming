#include<stdio.h>
#include<string.h>

int main()
{
    char a[45],b[45],c[45];
    gets(a);
    gets(b);
    gets(c);
    printf("%s%s%s\n",a,b,c);
    printf("%s%s%s\n",b,c,a);
    printf("%s%s%s\n",c,a,b);
    //printf("%.10s%.10s%.10s\n",a,b,c);
    printf("% .10s% .10s% .10s\n",a,b,c);
    //printf("%.10s %.10s %.10s\n",a,b,c);---wrong
}
