#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    FILE *pHelloWorldSource;
    FILE *pHelloWorldDestination;
    char inputFile[50];
    char outputFile[50];
    char HelloWorldString;

    printf("Enter the source filename: ");
    scanf("%s", inputFile);
    printf("Enter destination filename: ");
    scanf("%s", outputFile);

    pHelloWorldSource = fopen(inputFile, "r");
    pHelloWorldDestination = fopen(outputFile, "w");

    if (pHelloWorldSource == NULL) {
        puts("File could not be opened.");
    } else { 
        puts("File was opened succesfully.");
    }

    int character;

    while ((character = fgetc(pHelloWorldSource)) != EOF) {
        putchar(character);
        fprintf(pHelloWorldDestination, "%c", character);
    }

    fclose(pHelloWorldSource);

    fclose(pHelloWorldDestination);

    return 0;
}