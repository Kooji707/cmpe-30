#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main () {

    char s[100];

    printf("Enter a string: ");
    fgets(s, 100, stdin); //get input from the user
    int size = strlen(s);

    char uppercase[size];
    char lowercase[size];

    for (int i = 0; i < size; i++) {
        if (islower(s[i]) == 1) {
            uppercase[i] = toupper(s[i]);
        } else if(isupper(s[i]) == 1) {
            uppercase[i] = s[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (isupper(s[i]) == 1) {
            lowercase[i] = tolower(s[i]);
        } else if (islower(s[i]) == 1){
            lowercase[i] = s[i];
        }
    }

    printf("Uppercase: %s \n", uppercase);
    printf("Lowercase: %s \n", lowercase);
    return 0;
}