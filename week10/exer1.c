#include<stdio.h>

void change (int *pMyArray, int *pMySize) {
    for (int i = 0;i < *pMySize; i++) {
        pMyArray[i] = pMyArray[i] * 2;
    }
}

void printArray (int *pMyArray, int *pMySize) {
    for (int i = 0;i < *pMySize; i++) {
        printf("%d ", pMyArray[i]);
    }
}

int main () {
    int myArray[3] = {1 ,2 ,3};
    int mySize = sizeof(myArray) / sizeof myArray[0];

    int *pMySize = &mySize;

    change(myArray, pMySize);
    printArray(myArray, pMySize);

    return 0;
}