#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray (int *myArray, int *pMySize) {
    for (int i = 0; i < 100; i++)
    {
        printf("%d: %d\n", i+1, myArray[i]);
    }
}

int * MinMaxAvg (int *myArray, int *pMySize) {
    int intitialSmallest = myArray[0];
    int intitialLargest = myArray[0];
    int arrayTotal = 0;

    //finds minimum, maximum, and average
    for (int i = 0; i < *pMySize; i++) {
        if (myArray[i] < intitialSmallest) {
            intitialSmallest = myArray[i];
        }
        if (myArray[i] > intitialLargest) {
            intitialLargest = myArray[i];
        }
        arrayTotal = arrayTotal + myArray[i];
    }
    int mySmallest = intitialSmallest;
    int myLargest = intitialLargest;
    int myAverage = arrayTotal / *pMySize;

    int  returnArray[3] = {mySmallest, myLargest, myAverage};
    return  returnArray;
}

int main () {
    int myArray[100];
    srand(time(NULL));

    int returnArray[3];
    for (int i = 0; i < 100; i++) {
        int randomNumber = rand() % 990 + 10;
        myArray[i] = randomNumber;
    }
    int mySize = sizeof(myArray) / sizeof myArray[0];
    int *pMySize = &mySize;

    printArray(myArray, pMySize);
    
    int *pReturnArray = MinMaxAvg(myArray, pMySize);
    
    printf("Minimum: %d, Maximum: %d, Average: %d\n", pReturnArray[0], pReturnArray[1], pReturnArray[2]);

    return 0;
}