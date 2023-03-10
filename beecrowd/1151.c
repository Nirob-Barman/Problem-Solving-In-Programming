#include<stdio.h>
int main()

{
    int num1=0,num2=1,num3,num,count=0;
    scanf("%d",&num);
    printf("%d",num1);
    printf(" %d",num2);
    count=2;
    while(count<num)
    {
        num3=num1+num2;
        count++;
        printf(" %d",num3);
        num1=num2;
        num2=num3;
    }
    printf("\n");
    return 0;
}
