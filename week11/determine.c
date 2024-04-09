//Read a sentence and write a function to determine how many lower-case characters, upper case characters, spaces, digits it has. You must display all these values in main.

#include <string.h>
#include <stdio.h>
#include <ctype.h>

void determine (char *myString) {
    int stringSize = strlen(myString);
    int lowerCaseCounter = 0;
    int upperCaseCounter = 0;
    int spaceCounter = 0;
    int digitsCounter = 0;

    for (int i = 0; i < stringSize; i++) {
        if (islower(myString[i]) == 1) {
            lowerCaseCounter++;
        } else if (isupper(myString[i]) == 1) {
            upperCaseCounter++;
        } else if (isdigit(myString[i]) == 1) {
            digitsCounter++;
        }
    }

    int j = 0;
    char stringLooper = myString[0];
    while (stringLooper != '\0') {
        stringLooper = myString[j];
        if (isspace(stringLooper)) {
            spaceCounter++;
        }
        j++;
    }
    spaceCounter--;

    printf("The string has %d lower-case characters, %d upper-case characters, %d spaces, and %d digits.\n", lowerCaseCounter, upperCaseCounter, spaceCounter, digitsCounter);    
}

int main () {

    char myString[50];

    printf("Enter a string: ");
    fgets(myString, 50, stdin); //get input from the user

    int size = strlen(myString);

    determine(myString);

    return 0;
}
