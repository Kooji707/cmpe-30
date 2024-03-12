#include <stdio.h>

int main (){
    int length;
    printf("Enter the number of elements you want to store: \n");
    scanf("%d",&length);
    
    int number;
    int input[length];
    int reverse[length];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < length; i++) {
        scanf("%d",&number);
        input[i] = number;
    }
    for (int i = 0; i < length; i++) {
        reverse[i] = input[((length-1)-i)];
    }
        printf ("Inputed Array\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", input[i]);
    }
    printf ("Reversed Array\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", reverse[i]);
    }

    return 0;
}


