#include <stdio.h>
int main (){
    int a = 30;
    int b = 90;

    printf("Before: a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After: a = %d and b = %d\n", a, b);

    return 0;
}