#include<stdio.h>

int main()
{
    double salary,tax;
    scanf("%lf",&salary);
    if(salary<=2000)
        printf("Isento\n");
    else if(salary>2000 && salary<=3000)
    {
        salary-=2000;
        tax=salary*0.08;
        printf("R$ %.2lf\n",tax);
    }
    else if(salary>3000.01 && salary<=4500)
    {
        salary-=3000;
        tax=salary*0.18+80;
        printf("R$ %.2lf\n",tax);
    }
    else
    {
        salary-=4500;
        tax=salary*0.28+350;
        printf("R$ %.2lf\n",tax);
    }
}
