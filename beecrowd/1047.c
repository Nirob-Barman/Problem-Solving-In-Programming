#include<stdio.h>

int main()
{
    int ih,im,eh,em,th,tm;
    scanf("%d %d %d %d",&ih,&im,&eh,&em);

    th=eh-ih;
    if(th<0)
    {
        th=24+th;
    }
    tm=em-im;
    if(tm<0)
    {
        tm=60+tm;
        th--;
    }
    if(ih==eh && im==em)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
}
