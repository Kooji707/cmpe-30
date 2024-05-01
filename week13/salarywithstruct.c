#include <stdio.h>
#include <string.h>

struct Employee {
    int identification;
    char name[50];
    double basic_salary;
    double dearness_allowance;
    double house_rent_allowance;
    double total_salary;
};

void inputValueEmployee (struct Employee employeeArray[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Employee ID: ");
        scanf("%d", &employeeArray[i].identification);   
        printf("Employee name: ");
        scanf("%s", employeeArray[i].name);
        printf("Basic Salary: ");
        scanf("%lf", &employeeArray[i].basic_salary);
        printf("Dearness Allowance (input percentage as an integer): ");
        scanf("%lf", &employeeArray[i].dearness_allowance);
        printf("House Rent Allowance (input percentage as an integer): ");
        scanf("%lf", &employeeArray[i].house_rent_allowance);
        printf("Total Salary: ");
        employeeArray[i].total_salary = employeeArray[i].basic_salary + ((employeeArray[i].basic_salary)*(employeeArray[i].dearness_allowance/100)) + ((employeeArray[i].basic_salary)*(employeeArray[i].house_rent_allowance/100));
        printf("%.2f\n\n",employeeArray[i].total_salary);
    }
}

void displayEmployee (struct Employee anyEmployee) {
    printf("%s's Information:\n", anyEmployee.name);
    printf("Total Salary: $%.2f\n\n", anyEmployee.total_salary);
}

void topSalary (struct Employee employeeArray[3]) {
    int biggestSalary = employeeArray[0].total_salary;
    for (int i = 0; i < 3; i++) {
        if (employeeArray[i].total_salary > biggestSalary) {
            biggestSalary = employeeArray[i].total_salary;
        }
    }
    for (int j = 0; j < 3; j++) {
        if (biggestSalary == employeeArray[j].total_salary) {
            printf("The maximum salary belongs to %s with $%.2d.", employeeArray[j].name, biggestSalary);
        }
    }
}

int main () {
    struct Employee employee[3];
    
    int employeeSelected;

    inputValueEmployee(employee);
    printf("\n");

    printf("Which employee ID number would you like to print the information of?: ");
    scanf("%d", &employeeSelected);

    displayEmployee(employee[employeeSelected-1]);
    topSalary(employee);

    return 0;
}