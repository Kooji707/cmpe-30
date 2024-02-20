#include <stdio.h>
//Write a C program to find the average of n numbers. Take input n from the user and find the average of numbers from 1 to n.

int main( void ) {

    float input_number = 0;
    float total = 0;
    float average = 0;

    printf("Enter your number: ");
    scanf("%f",&input_number);

for (int i = 1; i < input_number + 1; i++) {
    total += i;
}

    average = total / input_number;
    printf("Average is %.1f\n", average);

} 