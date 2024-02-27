#include <stdio.h>

int main (){

    int rows;

    printf("Enter how many rows: ");
    scanf("%d",&rows);
    for (int a = 1; a <= rows; a++) { 
        for(int d = rows - a; d > 0; d--) {
            printf(" ");
        }
        for (int b = 1; b <= a; b++) {
            printf("%d", b);
        }
        
        for (int c = a - 1; c > 0; c--) {
            printf("%d", c);
        }
    printf("\n");
    }

    return 0;
}