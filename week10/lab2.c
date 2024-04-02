#include<stdio.h>
#include <string.h>

int main() {

    char string[50];
    char cutString[50];
    char removedChar;
    int stringCounter = 0;

    printf("Enter a string: ");
    fgets(string, 50, stdin); //get input from the user
    printf("Enter a character to delete: ");
    scanf("%c",&removedChar);

    int size = strlen(string);
    
    for (int j = 0; j < size; j++) { 
        if (string[j] == removedChar) {
            continue;
        } else {
            cutString[stringCounter] = string[j];
            stringCounter++;
        }
    } //reverse the string and store it in char array named reversed

    printf("Output: %s\n", cutString);

    return 0;
}