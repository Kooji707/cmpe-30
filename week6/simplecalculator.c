#include <stdio.h>
#include <math.h>

int main (){

    int firstnum;
    int secondnum; 
    int result;
    char calculation;

    printf("Enter the operation followed by 2 numbers: \n");
    scanf("%c", &calculation);

    switch(calculation){
        case '*':
            scanf("%d", &firstnum);
            scanf("%d", &secondnum);
            result = firstnum *  secondnum;
            printf("Result: %d", result);
            printf("\n");
            break;
        case '/':
            scanf("%d", &firstnum);
            scanf("%d", &secondnum);
            result = firstnum / secondnum;
            printf("Result: %d", result);
            printf("\n");
            break;
        case '+':
            scanf("%d", &firstnum);
            scanf("%d", &secondnum);
            result = firstnum + secondnum;
            printf("Result: %d", result);
            printf("\n");
            break;
        case '-':
            scanf("%d", &firstnum);
            scanf("%d", &secondnum);
            result = firstnum - secondnum;
            printf("Result: %d", result);
            printf("\n");
            break;
    }

    return 0;
}