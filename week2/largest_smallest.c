//Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers. Use only the single-selection form of the if statement you learned in this chapter. 
#include <stdio.h>
int main (){
    int a, b, c, sum, average, product;
    printf("Enter your first integer: ");
    scanf("%d",&a);
    printf("Enter your second integer: ");
    scanf("%d",&b);
    printf("Enter your third integer: ");
    scanf("%d",&c);
    printf("Enter three different integers: %d %d %d\n", a, b, c);
    //Sum
    sum = (a + b + c);
    printf("Sum is %d\n", sum);
    //Average
    average = ((a + b + c)/3);
    printf("Average is %d\n", average);
    //Product
    product = (a * b * c);
    printf("Product is %d\n", product);
    //Smallest
    if (a < b && a < c) {
        printf("Smallest is %d\n", a);
    }
    if (b < a && b < c) {
        printf("Smallest is %d\n", b);
    }
    if (c < b && c < a) {
        printf("Smallest is %d\n", c);
    }
    //Largest
    if (a > b && a > c) {
        printf("Largest is %d\n", a);
    }
    if (b > a && b > c) {
        printf("Largest is %d\n", b);
    }
    if (c > b && c > a) {
        printf("Largest is %d\n", c);
    }
return 0;
}