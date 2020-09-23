#include <stdio.h>
int main()
{

    float hra, da, gross_salary, basic_salary;
    printf("Enter your Basic Salary\n");
    scanf("%f", &basic_salary);
    if (basic_salary <= 10000)
    {
        da = basic_salary * 80 / 100;
        hra = basic_salary * 20 / 100;
    }
    else if (basic_salary <= 20000)
    {
        da = basic_salary * 90 / 100;
        hra = basic_salary * 25 / 100;
    }
    else
    {
        

        da=basic_salary*95/100;
        hra = basic_salary * 30 / 100;
    }
    gross_salary = basic_salary + hra + da;
    printf("Your Gross Salary is %f\n", gross_salary);

    return 0;
}
