#include <stdio.h>
int main (){
    double basic_salary, gross_salary;
    double medical = 1000;
    double insurance = 2000;
    printf("Enter your Basic Salary: ");
    scanf("%lf",&basic_salary);
    gross_salary = ((basic_salary * (0.2))- medical - insurance);

    printf("The Gross Salary is %lf", gross_salary);

    return 0;
}