#include<stdio.h>

int main()
{
    int emplyoyes_number, worked_hours_amount;
    double received_amount_per_hour, result;

    scanf("%d %d",&emplyoyes_number,&worked_hours_amount);
    scanf("%lf",&received_amount_per_hour);

    result = worked_hours_amount * received_amount_per_hour;

    printf("NUMBER = %d\n",emplyoyes_number);
    printf("SALARY = U$ %0.2lf\n",result);

    return 0;
}
