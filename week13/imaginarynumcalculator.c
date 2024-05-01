#include <stdio.h>

struct number {
    int real;
    int imaginary;
};

void inputNumbers(struct number numberArray[3]) {
    for (int i = 0; i < 2; i++) {
        printf("Input data for number slot %d: \n", i+1);
        printf("Real number counterpart: ");
        scanf("%d", &numberArray[i].real);
        printf("Imaginary number counterpart: ");
        scanf("%d", &numberArray[i].imaginary);
    }
}

void displaySummedNumber (struct number numberArray[2]) {
    int summedNumber;  
    numberArray[2].real = numberArray[0].real + numberArray[1].real;
    numberArray[2].imaginary = numberArray[0].imaginary + numberArray[1].imaginary;
    printf("The summed number is:\n%d + %di\n", numberArray[2].real, numberArray[2].imaginary);
}

int main () {
    struct number numberArray[3];
    inputNumbers(numberArray);
    displaySummedNumber(numberArray);
    
    return 0;
}