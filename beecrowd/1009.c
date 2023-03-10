#include<stdio.h>

int main()
{
    char name[30];
    float salary;
    double sell,TOTAL;
    gets(name);
    scanf("%f %lf",&salary, &sell);
    TOTAL = salary + (sell*15)/100;

    printf("TOTAL = R$ %0.2lf\n", TOTAL);

    return 0;
}
