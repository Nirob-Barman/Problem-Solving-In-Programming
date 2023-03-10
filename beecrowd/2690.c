#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,l,j,k;
    char s[33]; //idk to get rid of rte need the size of character 32++
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        for(i=0,k=0;i<l&&k<12;i++,k++)
        {
            if(s[i]=='G' || s[i]=='Q' ||s[i]=='a' ||s[i]=='k' ||s[i]=='u')
                printf("0");
            else if(s[i]=='I' || s[i]=='S' ||s[i]=='b' ||s[i]=='l' ||s[i]=='v')
                printf("1");
            else if(s[i]=='E' || s[i]=='O' ||s[i]=='Y' ||s[i]=='c' ||s[i]=='m' ||s[i]=='w')
                printf("2");
            else if(s[i]=='F' || s[i]=='P' ||s[i]=='Z' ||s[i]=='d' ||s[i]=='n' ||s[i]=='x')
                printf("3");
            else if(s[i]=='J' || s[i]=='T' ||s[i]=='e' ||s[i]=='o' ||s[i]=='y')
                printf("4");
            else if(s[i]=='D' || s[i]=='N' ||s[i]=='X' ||s[i]=='f' ||s[i]=='p' ||s[i]=='z')
                printf("5");
            else if(s[i]=='A' || s[i]=='K' ||s[i]=='U' ||s[i]=='g' ||s[i]=='q')
                printf("6");
            else if(s[i]=='C' || s[i]=='M' ||s[i]=='W' ||s[i]=='h' ||s[i]=='r')
                printf("7");
            else if(s[i]=='B' || s[i]=='L' ||s[i]=='V' ||s[i]=='i' ||s[i]=='s')
                printf("8");
            else if(s[i]=='H' || s[i]=='R' ||s[i]=='j' ||s[i]=='t')
                printf("9");
            else if(s[i]==' ')
                k=k-1;
        }
        printf("\n");
    }
}
