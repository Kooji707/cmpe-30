#include <string.h>
#include <stdio.h>
#include <stdlib.h> 

int main () {

    char firstString[100];
    char secondString[100];
    char thirdString[100];
    char fourthString[100];

    printf("Enter 4 strings: \n");
    fgets(firstString, 100, stdin); //get input from the user
    fgets(secondString, 100, stdin);
    fgets(thirdString, 100, stdin);
    fgets(fourthString, 100, stdin);

    int firstInt = atoi(firstString);
    int secondInt = atoi(secondString);
    int thirdInt = atoi(thirdString);
    int fourthInt = atoi(fourthString);

    int sum = firstInt + secondInt + thirdInt + fourthInt;

    printf("The total of these strings is %d\n", sum);

    return 0;
}