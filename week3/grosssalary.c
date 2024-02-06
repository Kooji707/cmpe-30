#include <stdio.h>
int main (){
    double basic_salary, gross_salary;
    double medical = 1000;
    double insurance = 2000;
    printf("Enter your yearly basis salary: ");
    scanf("%lf",&basic_salary);
    gross_salary = ((basic_salary) + (basic_salary * 0.2) + (basic_salary * 0.4) + (medical) - (basic_salary * 0.1) - (insurance) - (basic_salary * 0.1));

    printf("The Gross Salary is %.2f", gross_salary);

    return 0;
}