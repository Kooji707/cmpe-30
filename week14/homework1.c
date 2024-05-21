#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void StandardOutput () {
    FILE *StandardInput;
    FILE *StandardOutput;
    StandardInput = stdin;
    StandardOutput = stdout;
    int character; 
    char sentence[80]; 
    int i = 0;

    puts("Enter a line of text:");
    while((i < 80 - 1) && (character = fgetc(StandardInput)) != '\n'){
        sentence[i++] = character;
    }

    sentence[i] = '\0';
    
    fputs("The line entered was: \n", StandardOutput);
    fputs(sentence, StandardOutput);
    fclose(StandardInput);
    fclose(StandardOutput);
}

void FileWrite () {
    FILE *pSourceFile;
    FILE *pDestinationFile;
    char inputFile[50];
    char outputFile[50];
    char CopiedString;

    printf("Enter the source filename: ");
    scanf("%s", inputFile);
    printf("Enter destination filename: ");
    scanf("%s", outputFile);

    pSourceFile = fopen(inputFile, "r");
    pDestinationFile = fopen(outputFile, "w");

    if (pSourceFile == NULL) {
        puts("File could not be opened.");
    } else { 
        puts("File was opened succesfully.");
    }

    int character;

    while ((character = fgetc(pSourceFile)) != EOF) {
        putchar(character);
        fprintf(pDestinationFile, "%c", character);
    }

    fclose(pSourceFile);

    fclose(pDestinationFile);
}

int main () {
    int decision = 0;
    printf("1. Would you like to read a string from standard input to be outputed\n2. copy a file's contents to another? \n(Type 1 or 2)\n");
    scanf("%d", &decision);
    getchar();

    if (decision == 1) {
        StandardOutput();
    } else FileWrite();

    return 0;
}