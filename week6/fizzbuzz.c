#include <stdio.h>
//Write a C program that plays a variation of the Fizz Buzz game. In this version, the program should first ask the user to enter two distinct numbers between 1 and 9 (inclusive). Let's call the first number FizzNum and the second BuzzNum. Then, the program should print the numbers from 1 to 25 but for multiples of FizzNum print Fizz, for multiples of BuzzNum print Buzz, and for multiples of both FizzNum and BuzzNum print FizzBuzz. For numbers that are not multiples of either, simply print the number.

int main (){

    int FizzNum;
    int BuzzNum;
    int i;

    printf("Enter FizzNum: ");
    scanf("%d",&FizzNum);
    printf("Enter BuzzzNum: ");
    scanf("%d",&BuzzNum);
    printf("\n");

    for (i = 1; i <= 25; i++) {
        if (i % FizzNum == 0 && i % BuzzNum == 0) {
            printf("FizzBuzz");
        } 
        else if (i % FizzNum == 0) {
            printf("Fizz");
        }
        else if (i % BuzzNum == 0) {
            printf("Buzz");
        }
        else {
            printf("%d",i);
        }
        printf("\n");
        continue;
    }

    return 0;
}