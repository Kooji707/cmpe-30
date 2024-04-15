#include <stdio.h>

int main () {
    int myArray [9] = {7,5,7,1,3,2,8,9,2};
    int smallElement = myArray [0];
    int bigElement = myArray [0];

    for (int i = 1; i < 9; i++) {
        if (myArray [i] < smallElement) {
            smallElement = myArray [i];
        }
        if (myArray [i] > bigElement) {
            bigElement = myArray [i];
        }
    }

    printf("Smallest element is %d and biggest element is %d.", smallElement, bigElement);

    return 0;
}