/*
Create an Employee structure that has a field for id (of type integer) a field for age of type integer, a field for salary of type double.
Write a display function to print the information for that employee.

In main create 3 employees and read the information from the keyboard and place the values in each field then send each one to display function.
*/
#include <stdio.h>

struct Employee {
    int indentification;
    int age;
    double salary;
};

void displayEmployee (struct Employee anyEmployee) {
    printf("ID number: %d\n", anyEmployee.indentification);
    printf("Age: %d\n", anyEmployee.age);
    printf("Salary: %.2f\n\n", anyEmployee.salary);
}

int main () {
    struct Employee employee1;
    struct Employee employee2;
    struct Employee employee3;
    
    printf("Input the employee's ID number: \n");
    scanf("%d", &employee1.indentification);
    printf("Input the employee %d's age: \n", employee1.indentification);
    scanf("%d", &employee1.age);
    printf("Input employee %d's salary\n", employee1.indentification);
    scanf("%lf", &employee1.salary);

    printf("\nInput the employee's ID number: \n");
    scanf("%d", &employee2.indentification);
    printf("Input the employee %d's age: \n", employee2.indentification);
    scanf("%d", &employee2.age);
    printf("Input employee %d's salary\n", employee2.indentification);
    scanf("%lf", &employee2.salary);

    printf("\nInput the employee's ID number: \n");
    scanf("%d", &employee3.indentification);
    printf("Input the employee %d's age: \n", employee3.indentification);
    scanf("%d", &employee3.age);
    printf("Input employee %d's salary\n", employee3.indentification);
    scanf("%lf", &employee3.salary);

    printf("\n");

    displayEmployee(employee1);
    displayEmployee(employee2);
    displayEmployee(employee3);

    return 0;
}