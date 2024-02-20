#include <stdio.h>
//Write a C program to print a right-angled triangle of asterisks (*) where the number of rows is equal to the input value.

int main (){

    int rows;

    printf("Enter how many rows: ");
    scanf("%d",&rows);
    for (int a = 1; a <= rows; a++)
    {
        for (int b = 0; b < a; b++)
        {
            printf("*");
        }
    printf("\n");
    }
    


    return 0;
}