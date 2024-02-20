#include <stdio.h>
//Write a C program to check if a given number is prime or not.

int main (){

    int input_number = 0;
    int prime = 1;

    printf("Enter the number you want to check: ");
    scanf("%d",&input_number);
    for (int a = 2; a < input_number; a++) {
        if (input_number % a == 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1) {
        printf("%d is a prime number.", input_number);
    } else {
        printf("%d is not a prime number.", input_number);
    }
    
    return 0;
}