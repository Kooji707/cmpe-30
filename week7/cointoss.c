#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//picks either 0 or 1 and stores it in CoinToss
void flip(){
    srand(time(0));
    int CoinToss = rand() % 2;
}

int main (){

    int headCount = 0;
    int tailsCount = 0;
    int CoinToss;
    
    for (int i = 0; i < 100; i++)
    {
        //invokes the function called flip
        flip();
        printf("%d \n",CoinToss);
        if (CoinToss == 0) {
            headCount++;
        }
        else tailsCount++;
    }
    printf("%d heads and %d tails.",headCount, tailsCount);

    return 0;
}