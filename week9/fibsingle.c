#include <stdio.h>

int main (){

    int fibonacci = 0;
    int fibonacci_temp = 1;
    int temp = 0;
    int input;

    printf("Enter n: ");
    scanf("%d",&input);

    for (int i = 0; i < input; i++)
    {
        temp = fibonacci + fibonacci_temp;
        fibonacci = fibonacci_temp;
        fibonacci_temp = temp;  
        if (input == i+1) {
            printf("F(%d) = %d\n", input, fibonacci);
        }
    }
    
    return 0;
}