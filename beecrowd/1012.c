#include<stdio.h>

int main()
{
    float A,B,C;
    double pi, tri, cir, trap, sq, rect;

    scanf("%f %f %f", &A,&B,&C);

    pi=3.14159;
    tri = .5* A*C;
    cir = pi*(C*C);
    trap = (A+B)*C/2;
    sq = B*B;
    rect = A*B;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", sq);
    printf("RETANGULO: %.3lf\n", rect);

    return 0;
}
