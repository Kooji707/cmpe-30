#include <stdio.h>
int main (){

    double basic_salary, gross_salary;
    double medical = 1000;
    double insurance = 2000;
    printf("Enter your yearly basis salary: ");
    scanf("%lf",&basic_salary);
    gross_salary = ((basic_salary) + (basic_salary * 0.2) + (basic_salary * 0.4) + (medical) - (basic_salary * 0.1) - (insurance) - (basic_salary * 0.1));

    int gross_salary_integer = gross_salary;
    printf("The Gross Salary is %d", gross_salary_integer);

    return 0;
    
}