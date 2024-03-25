#include <stdio.h>

void bubbleSort(int array[], int length) {
    int passesCount = 0;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array [j] = array[j+1];
                array [j+1] = temp;
                passesCount++;
            }
        }
        if (passesCount == 0) {
            break;
        }
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main () {
    int array[] = {20,1,11,12,99,32,4,2};
    int length = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, length);
    printArray(array, length);

    return 0;    
}