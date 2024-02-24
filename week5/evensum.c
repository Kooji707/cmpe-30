#include <stdio.h>
int main (){

    int sum_number = 0;
    int a;

    for (a = 2; a <= 30; a += 2)
    {
        sum_number += a;
    }
    printf("Sum is %d\n", sum_number);
    return 0;
}
