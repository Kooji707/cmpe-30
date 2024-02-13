#include <stdio.h>
#include <math.h>

int main (){

    int test;
    int midterm;
    int final;

    printf("Enter a your grades out of 100: \n");
    printf("Enter your class tests grade: \n");
    scanf("%d",&test);
    printf("Enter your mid-semester exams grade: \n");
    scanf("%d",&midterm); 
    printf("Enter your final exam grade: \n");
    scanf("%d",&final);

    int total_grade;

    double weightedtest = (test * 0.3);
    double weightedmidterm = (midterm * 0.3);
    double weightedfinal = (final * 0.4);
 
    total_grade = (weightedtest + weightedmidterm + weightedfinal);

    if (total_grade >= 90)
    {
    puts("Your grade is an A+.");
    }
    else if (total_grade >= 80)
    {
    puts("Your grade is an A.");
    }
    else if (total_grade >= 70)
    {
    puts("Your grade is a B.");
    }
    else if (total_grade >= 60)
    {
    puts("Your grade is a C.");
    }
    else if (total_grade >= 50)
    {
    puts("Your grade is a D.");
    }
    else 
    {
    puts("Your grade is an F.");
    }

    return 0;
}