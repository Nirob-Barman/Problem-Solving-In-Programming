#include<stdio.h>

int main()
{
    float salary,totalsalary,rate;
    scanf("%f",&salary);

    if(salary>=0 && salary<=400)
    {
        totalsalary=salary+(salary*15/100);
        printf("Novo salario: %.2f\n",totalsalary);
        printf("Reajuste ganho: %.2f\n",totalsalary-salary);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>400 && salary<=800)
    {
        totalsalary=salary+(salary*12/100);
        printf("Novo salario: %.2f\n",totalsalary);
        printf("Reajuste ganho: %.2f\n",totalsalary-salary);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>800 && salary<= 1200)
    {
        totalsalary=salary+(salary*10/100);
        printf("Novo salario: %.2f\n",totalsalary);
        printf("Reajuste ganho: %.2f\n",totalsalary-salary);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>1200 && salary<=2000)
    {
        totalsalary=salary+(salary*7/100);
        printf("Novo salario: %.2f\n",totalsalary);
        printf("Reajuste ganho: %.2f\n",totalsalary-salary);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000)
    {
        totalsalary=salary+(salary*4/100);
        printf("Novo salario: %.2f\n",totalsalary);
        printf("Reajuste ganho: %.2f\n",totalsalary-salary);
        printf("Em percentual: 4 %%\n");
    }
}
