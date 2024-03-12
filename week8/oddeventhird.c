#include <stdio.h>

int main (){
    int odd[5] = {3,5,7,9,11};
    int even[5] = {4,6,8,10,12};
    int third[5];

    for (int i = 0; i < 5; i++) {
        third[i] = odd [i] + even [i];
    }
    printf ("Odd Array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", odd[i]);
    }
    printf ("Even Array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", even[i]);
    }
    printf ("Third Array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", third[i]);
    }

    return 0;
}


