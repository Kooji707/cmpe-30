#include <stdio.h>

int main () {

    int input;
    int hundredCount = 0;
    int fiftyCount = 0;
    int twentyCount = 0;
    int tenCount = 0;
    int fiveCount = 0;
    int oneCount = 0;

    printf("Enter the amount in USD: $");
    scanf("%d",&input);
    printf("Amount: $%d\n", input);

    while (input >= 100) {
        hundredCount++;
        input = input - 100;
    }
    
    while (input >= 50) {
        fiftyCount++;
        input = input - 50;
    }

    while (input >= 20) {
        twentyCount++;
        input = input - 20;
    }

    while (input >= 10) {
        tenCount++;
        input = input - 10;
    }

    while (input >= 5) {
        fiveCount++;
        input = input - 5;
    }

    while (input >= 1) {
        oneCount++;
        input = input - 1;
    }
    
    printf("$100: %d notes\n", hundredCount);
    printf("$50: %d notes\n", fiftyCount);
    printf("$20: %d notes\n", twentyCount);
    printf("$10: %d notes\n", tenCount);
    printf("$5: %d notes\n", fiveCount);
    printf("$1: %d notes\n", oneCount);

    return 0;
}