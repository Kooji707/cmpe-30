#include <stdio.h>

int main(){

    int side_1;
    int side_2;
    int side_3;

    scanf("%d",&side_1);
    scanf("%d",&side_2);
    scanf("%d",&side_3);

    if ((side_1 % side_2 == 0) && (side_2 % side_3 == 0) && (side_3 % side_1 == 0)) {
        printf("This is an equilateral triangle.\n"); 
    } else if ((side_1 % side_2 == 0) || (side_2 % side_3 == 0) || (side_3 % side_1 == 0)) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}