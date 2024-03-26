#include<stdio.h>
#include <string.h>

int main() {

    char string[50];
    char reversed[50];
    int size = 0;

    printf("Enter a string: ");
    fgets(string, 50, stdin); //get input from the user

    for (int i = 0; string[i] != NULL; i++) {
        size++;
    }
    
    for (int j = 0; j < size; j++) { 
        reversed[j] = string[size - j - 1];
    } //reverse the string and store it in char array named reversed

    printf("Reversed string: %s\n", reversed);

    return 0;
}