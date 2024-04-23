#include <stdio.h>

void modify (int * myArray, int size) {
    int modifiedArray[size];
    for (int i = 0; i < size; i++) {
        if (myArray[i] % 2 == 0) {
            myArray[i] = myArray[i] + 2;
        } else {
            myArray[i] = myArray[i] + 1;
        }
    }
}

int main () {
    int size = 1;
    int myArray[size];

    printf("Enter the size of the one-dimensional array: ");
    scanf("%d",&size);
    printf("Enter %d elements for the one-dimensional array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    modify(myArray, size);
    
    printf("Modified One-Dimensional Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    

    return 0;
}