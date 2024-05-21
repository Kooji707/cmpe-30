#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int foundCounter = 0;
    char FileName[50];
    FILE *pSample;
    char SearchWord[50];
    int lineCounter = 1;
    char temp[50];

    printf("Enter the filename: ");
    scanf("%s", FileName);
    printf("Enter the text to search: ");
    scanf("%s", SearchWord);

    pSample = fopen(FileName, "r");

    if (pSample == NULL) {
        puts("File could NOT be opened.");
    } else { 
        puts("File was opened successfully.");
    }

    while(fgets(temp, 50, pSample) != NULL) {
	    if((strstr(temp, SearchWord)) != NULL) {
			printf("'%s' found on line %d: ",SearchWord, lineCounter);
			printf("%s", temp);
		}
		lineCounter++;
	}

    fclose(pSample);

    return 0;
}