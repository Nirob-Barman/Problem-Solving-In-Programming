#include<stdio.h>

int main()
{
    int e,d;
    scanf("%d %d",&e,&d);
    if(e>d || d>25)
        printf("Eu odeio a professora!\n");
    else if(e<d && d<22)
        printf("Muito bem! Apresenta antes do Natal!\n");
    else
    {
        printf("Parece o trabalho do meu filho!\n");
        if(d==22)
            printf("TCC Apresentado!\n");
        else if(d==23)
            printf("Fail! Entao eh nataaaaal!\n");
    }
}
