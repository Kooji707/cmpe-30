#include <stdio.h>

int main (){

    int rows;
    int g;

    printf("Enter how many rows: ");
    scanf("%d",&rows);
    for (int a = 0; a <= rows; a++) { 
        for (g = rows; g > 0; g=0) {
            printf("%d",g);
        }
        for (int b = 0; b < a; b++) {
            printf("%d", b+1);
        }
    g=g-1;
    printf("\n");
    }

    return 0;
}