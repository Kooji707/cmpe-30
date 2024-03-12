#include <stdio.h>

int main (){
    int marks[5][4];
    int score;
    int total = 0;
    double history_total;
    double average = 0;

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &score);
            marks[i][j] = score;
        }
        printf("\n");
    }

    printf("Total Marks for Each Student:\n");
    for (int i = 0; i < 5; i++)
    {
        total = 0;
        printf("Student %d: ", (i+1));
        for (int k = 0; k < 4; k++)
        {
            total = total + marks[i][k];
        }
        printf("%d \n", total);
    }

    printf("Average marks in History subject:\n");
    for (int w = 0; w < 5; w++)
    {
        history_total = history_total + marks[w][1];
        average = (history_total/5);
    }
    printf("%.1f\n", average);

    return 0;
}


