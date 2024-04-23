#include <stdio.h> 

int main () {
    int size = 1;
    int myArray[size];

    printf("Enter the number of elements: ");
    scanf("%d",&size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    //reversed array:
    int revMyArray[size];
    for (int i = size; i >= 0 ; i--) {
        revMyArray[size - i - 1] = myArray[i];
    }

    printf("Reversed Array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", revMyArray[i]);
    }


    return 0;
}