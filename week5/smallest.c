#include <stdio.h>

int main( void )
{

    int new_number;
    int smallest;

    while (smallest != -1) {
        printf("Enter the an integer (-1 to end): \n");
        scanf("%d",&new_number);
        if (new_number == -1) {
            break;
        }
        smallest = new_number;
    }

    printf("The smallest number is %d \n", smallest);

} 