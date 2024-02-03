//Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder.
#include <stdio.h>
int main (){
//Asks user for numbers
int a, b, sum, product, difference, quotient, remainder;
printf("Enter your first value: ");
scanf("%d",&a);
printf("Enter your second value: ");
scanf("%d",&b);
//Sums and prints output
sum = a + b;
printf("The sum of %d and %d is %d\n", a, b, sum);
//Finds product and prints output
product = a * b;
printf("The product of %d and %d is %d\n", a, b, product);
//Finds difference and prints output
difference = a - b;
printf("The difference of %d and %d is %d\n", a, b, difference);
//Finds quotient and prints output
quotient = a / b;
printf("The quotient of %d and %d is %d\n", a, b, quotient);
//Finds remainder and prints output
remainder = a % b;
printf("The remainder when dividing %d and %d is %d\n", a, b, remainder);

    return 0;
}