#include<iostream>

using namespace std;


int main()
{
    float a, b, c, d, last, m,ma;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &last);
        printf("Nota do exame: %.1f\n", last);
        ma=(last+m)/2.0;
        if (ma > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", ma);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
