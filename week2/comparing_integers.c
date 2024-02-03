//2.18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger." 
//If the numbers are equal, print the message " These numbers are equal."
//Use only the single-selection form of the if statement you learned in this chapter.
#include <stdio.h>
int main (){
    int a, b;
    printf("Enter your first integer: ");
    scanf("%d",&a);
    printf("Enter your second integer: ");
    scanf("%d",&b);
    if (a > b) {
        printf("%d is larger.",a);
    }
    if (b > a) {
        printf("%d is larger.",b);
    }
    if (a == b) {
        printf("These numbers are equal.");
    }
    return 0;
}