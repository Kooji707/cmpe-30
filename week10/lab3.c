#include<stdio.h>
#include <string.h>

void match (char *inputName) {
    int nameSize = strlen(inputName);
    int letterCounter = 0;
    int counter = 0;

    for (int i = 0;i < nameSize; i++) {
        letterCounter = 1;
        for (int j = i + 1; j < nameSize; j++) {
            if(inputName[i] == inputName [j] && inputName[i] != ' ') {
                letterCounter++;
                inputName[j] = '0';
            }
        }
        if (letterCounter > 1 && inputName[i] != '0') {
            printf("%c repeats %d times, ", inputName[i], letterCounter);
            counter++;
        }
    }
    if(counter == 0) {
        printf("None of the characters are repeating\n");
    }
}

int main () {

    char inputName[50];

    printf("Enter a name: ");
    fgets(inputName, sizeof(inputName), stdin); //get input from the user
    match(inputName);
    
    return 0;
}
