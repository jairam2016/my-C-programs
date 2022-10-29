#include<stdio.h>

int main()
{
    float b_salary,da,hra,gross_salary;
    printf("\nENTER RAMESH BASIC SALARY:");
    scanf("%f",&b_salary);
    da=0.40*b_salary;
    hra=0.20*b_salary;
    gross_salary=b_salary+da+hra;
    printf("\nTHE GROSS SALARY IS %f",gross_salary);
    return 0;
}