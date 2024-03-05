#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(){
    srand(time(0));
    int CoinToss = rand() % 2;
    return CoinToss;
}

int main (){

    int headCount = 0;
    int tailsCount = 0;
    
    for (int i = 0; i < 100; i++)
    {
        int CoinToss = flip();
        if (CoinToss == 0) {
            headCount++;
        }
        else tailsCount++;
    }
    printf("%d heads and %d tails.",headCount, tailsCount);

    return 0;
}