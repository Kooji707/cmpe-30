//Write a C program that generates a random number between 1 and 100 and asks the user to guess it. Provide feedback to the user if the guessed number is higher or lower than the generated number. Use loops, conditional statements, and the break statement to control the flow of the game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    // This line generates a random number between 1 and 100
    srand(time(0));
    
    int randomNumber = rand() % 100 + 1;
    int guessNumber = 0;

    while (guessNumber != randomNumber) {
        printf("Guess the number (between 1 and 100:) ");
        scanf("%d",&guessNumber);
        if (guessNumber > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        if (guessNumber < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
    }
    printf("Congratulations! You guessed the number.\n");

    return 0;
}