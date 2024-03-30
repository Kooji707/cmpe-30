#include<stdio.h>

void change ( int * myArray, int mySize) {
    for (int i = 0;i < mySize; i++) {
        myArray[i] = myArray[i] * 2;
    }
}

void printArray (int * myArray, int mySize) {
    for (int i = 0;i < mySize; i++) {
        printf("%d ", myArray[i]);
    }
}

int main () {
    int myArray[3] = {1 ,2 ,3};
    int mySize = sizeof(myArray) / sizeof myArray[0];

    change(myArray, mySize);
    printArray(myArray, mySize);

    return 0;
}