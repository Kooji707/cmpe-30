#include <stdio.h>
#include <string.h>

//a function that combines 2 strings and ouputs a third, concatenated string
void concatenate (char* firstString, char* secondString, char* thirdString) {
    int firstSize = strlen(firstString) - 1;
    int secondSize = strlen(secondString) - 1;

    int thirdSize = firstSize + secondSize;
    thirdString[thirdSize];

    for (int i = 0; i < (firstSize); i++) {
        thirdString[i]=firstString[i];
    }
    for (int i = firstSize; i < (firstSize + secondSize); i++) {
        thirdString[i]=secondString[i - firstSize];
    }2
}

int main () {

    char firstString[100];
    char secondString[100];
    char thirdString[100];

    printf("Enter two strings: \n");
    fgets(firstString, 100, stdin); //get input from the user
    fgets(secondString, 100, stdin);  

    concatenate(firstString, secondString, thirdString);

    puts(thirdString);
    //display the third, concatenated string

    return 0;
}