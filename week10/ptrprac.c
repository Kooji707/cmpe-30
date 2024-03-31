#include <stdio.h>

int main () {
    long int value1 = 200000, value2; 
    long *lPtr; //a
    lPtr = &value1; //b
    printf("%ld\n", *lPtr); //c
    value2 = *lPtr; //d
    printf("%ld\n", value2); //e
    printf("%p\n", &value1); //f
    printf("%p\n", lPtr); //g

    return 0;
 }