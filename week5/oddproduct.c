#include <stdio.h>
int main (){

    int odd_product = 1;
    int a = 1;

    for (a = 1; a <= 15; a += 2)
    {
        odd_product = a * odd_product;
    }
    printf("Product is %d\n", odd_product);

    return 0;
}