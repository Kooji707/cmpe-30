#include <stdio.h>
//4.11 (Find the Smallest) Write a program that finds the smallest of several integers. Assume that the first value read specifies the number of values remaining.

int main(void) {

    int new_number = 0;
    int smallest = 0;

    printf("Enter an integer (-1 to end): \n");
    scanf("%d",&new_number);
    smallest = new_number;

    do {
        
        printf("Enter an integer (-1 to end): \n");
        scanf("%d",&new_number);
        if (new_number == -1) {
            break;
        }
        if (new_number < smallest) {
            smallest = new_number;
        } else if (new_number == smallest) {
            smallest = new_number;
        } else if (new_number > smallest) {
            smallest = smallest;
        } else {
            smallest = new_number;
        }
    }
    while (new_number != -1);
    printf("The smallest number is %d \n", smallest);
} 