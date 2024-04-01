#include<stdio.h>
#include <string.h>

void match (char *inputName, char *checkedArray,char letter, int size) {
    int checkSize = strlen(checkedArray);
    int letterCounter = 0;

    for (int i = 0;i < size; i++) {
        if (letter == inputName[i]) {
            letterCounter++;
            printf("%c %c\n",letter, inputName[i]);
        }
    }
    if (letterCounter > 1) {
        checkedArray[checkSize] = letter;
    }
}

int main () {

    char inputName[50];
    int chk;
    char checkedArray[50]; //letters have already been proven to be repeated will be stored here

    printf("Enter a name: ");
    fgets(inputName, 50, stdin); //get input from the user

    int size = strlen(inputName);
    printf("lenghth: %d", size);

    for (int i = 0; i < size; i++) {
        /*
        for (int k = 0; k < 50; i++) {
            if (inputName[i] == checkedArray[k]) {
                chk = 0;
            } else { 
                chk = 1; 
            }
        }
        if( chk != 0){
            match(inputName, checkedArray ,inputName[i], size);
        }
        */
        match(inputName, checkedArray ,inputName[i], size);
        int checkSize = strlen(checkedArray);
        //printf("%d\n", checkSize);
    }
    
    return 0;
}
