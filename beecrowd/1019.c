#include<stdio.h>

int main()
{
    long int input,hour,minute,sec;
    scanf("%ld",&input);

    hour=input/3600;
    sec=input%3600;
    minute=sec/60;
    sec=sec%60;

    printf("%ld:%ld:%ld\n",hour,minute,sec);

    return 0;
}
