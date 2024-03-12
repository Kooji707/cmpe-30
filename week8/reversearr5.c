#include <stdio.h>

int main (){
    int odd[5] = {3,5,7,9,11};
    int reverse[5];

    for (int i = 0; i < 5; i++) {
        reverse[i] = odd [(4-i)];
    }
        printf ("Odd Array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", odd[i]);
    }
    printf ("Reversed Array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", reverse[i]);
    }

    return 0;
}


