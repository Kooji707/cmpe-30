#include <stdio.h>

int main (){
    int length;
    printf("Enter the number of elements you want to store: \n");
    scanf("%d",&length);
    
    int number;
    int input[length];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < length; i++) {
        scanf("%d",&number);
        input[i] = number;
    }
    
    int new_number = input[0];
    int biggest = 0;

    for (int j = 0; j < length; j++)
    {
        new_number = input[j];

        if (new_number > biggest) {
            biggest = new_number;
        } else if (new_number == biggest) {
            biggest = new_number;
        } else if (new_number < biggest) {
            biggest = biggest;
        } else {
            biggest = new_number;
        }
    }
    printf("The biggest number is %d \n",biggest);
    
    return 0;
}


