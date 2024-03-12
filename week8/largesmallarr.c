#include <stdio.h>

int main (){
    
    int number;
    int input[10];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d",&number);
        while ((number < 1) || (number > 100)){
            printf("Number must be between 1 and 100.\n");
            scanf("%d",&number);
        }
        input[i] = number;
    }

    int initial_smallest = input[0];
    int initial_biggest = input[0];

    for (int j = 1; j < 10; j++)
    {
        if (input[j] < initial_smallest) {
            initial_smallest = input[j];
        } 
        if (input[j] > initial_biggest) {
            initial_biggest = input[j];
        } 
    }
    printf("The smallest number is %d \n",initial_smallest);
    printf("The biggest number is %d \n",initial_biggest);

    return 0;
}


