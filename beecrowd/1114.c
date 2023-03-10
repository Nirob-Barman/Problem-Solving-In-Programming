#include<stdio.h>

int main()
{
    int password;

    while(scanf("%d",&password)!=EOF)
    {
        if(password==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;

}
