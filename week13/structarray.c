/*
Create an Employee structure that has a field for id (of type integer) a field for age of type integer, a field for salary of type double.
Write a display function to print the information for that employee.

In main create an employee array of size 4 and pass this array to a function to get values for each employee. In main print the information of each employee.
*/
#include <stdio.h>

struct Employee {
    int identification;
    int age;
    double salary;
};

void inputValueEmployee (struct Employee employeeArray[4]) {
    for (int i = 0; i < 4; i++) {
        printf("\nEmployee ID: ");
        scanf("%d", &employeeArray[i].identification);
        printf("\nAge: ");
        scanf("%d", &employeeArray[i].age);
        printf("\nSalary: ");
        scanf("%lf", &employeeArray[i].salary);
    }
}

void displayEmployee (struct Employee anyEmployee) {
    printf("ID number: %d\n", anyEmployee.identification);
    printf("Age: %d\n", anyEmployee.age);
    printf("Salary: %.2f\n\n", anyEmployee.salary);
}

int main () {
    struct Employee employee[4];
    
    inputValueEmployee(employee);
    printf("\n");

    displayEmployee(employee[0]);
    displayEmployee(employee[1]);
    displayEmployee(employee[2]);
    displayEmployee(employee[3]);

    return 0;
}