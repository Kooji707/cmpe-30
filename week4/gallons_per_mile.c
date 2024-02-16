#include <stdio.h>

int main( void )
{

    double gallons = 0;
    double total_gallons = 0;
    double miles = 0;
    double total_miles = 0;
    double miles_per_gallon = 0;
    double final_average = 0;

    while (gallons != -1) {
        printf("Enter the gallons used (-1 to end): \n");
        scanf("%lf",&gallons);
        if (gallons == -1) {
            break;
        }
        printf("Enter the miles driven: \n");
        scanf("%lf",&miles);
        miles_per_gallon = miles / gallons;
        printf("The miles/gallon for this tank was %lf \n\n", miles_per_gallon);
        total_gallons += gallons;
        total_miles += miles;
    }

    final_average = total_miles / total_gallons;
    printf("The overall average miles/gallon was %lf \n", final_average);

} 