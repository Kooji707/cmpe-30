//Write a C program that prints the Fibonacci series up to a specified limit. The Fibonacci series starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers. Use loops to generate the series.

#include <stdio.h>

int main (){

    int fibonacci = 0;
    int fibonacci_temp = 1;
    int temp = 0;
    int input;

    printf("How many numbers of the fibonacci sequence would you like to print? \n");
    scanf("%d",&input);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < input; i++)
    {
        printf("%d ",fibonacci);
        temp = fibonacci + fibonacci_temp;
        fibonacci = fibonacci_temp;
        fibonacci_temp = temp;
    }
    
    return 0;
}