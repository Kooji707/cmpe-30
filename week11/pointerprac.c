#include <stdio.h>

int main () {
    int score = 50;
    int *pScore = &score;

    printf("the address of score is %p and the value of score is %d", pScore, *pScore);
    printf("the address of score is %p and the value of score is %d", &score, *pScore);

    return 0;
}