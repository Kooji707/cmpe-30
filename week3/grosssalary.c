#include <stdio.h>
int main (){

    double basic_salary, gross_salary;
    double medical = 1000;
    double insurance = 2000;
    printf("Enter your yearly basis salary: ");
    scanf("%lf",&basic_salary);
    double transport = basic_salary * 0.2;
    double housing = basic_salary * 0.4;
    double retirement_401k = basic_salary * 0.1;
    double income_tax = basic_salary * 0.1;
    
    //Gross salary = Basic salary + Trans Allow + Housing allowanc + med allow - 401k - insurance - income tax
    gross_salary = basic_salary + transport + housing + medical - retirement_401k - insurance - income_tax;

    int gross_salary_integer = gross_salary;
    printf("The Gross Salary is %d\n", gross_salary_integer);

    return 0;
    
}