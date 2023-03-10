#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,t,k,led;
    char n[100];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf(" %[^\n]",&n);
        l=strlen(n);
        led=0;
        for(i=0;i<l;i++)
        {
            if(n[i]=='1')
                led+=2;
            else if(n[i]=='2' || n[i]=='3' || n[i]=='5')
                led+=5;
            else if(n[i]=='4')
                led+=4;
            else if(n[i]=='6' || n[i]=='9' || n[i]=='0')
                led+=6;
            else if(n[i]=='7')
                led+=3;
            else if(n[i]=='8')
                led+=7;
        }
        printf("%d leds\n",led);
    }
}
