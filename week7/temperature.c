#include <stdio.h>
//5.24 (Temperature Conversions) Implement the following integer functions:
//a. Function toCelsius returns the Celsius equivalent of a Fahrenheit temperature.
//b. Function toFahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
//c. Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format that minimizes the number of lines of outout while remaining readable.

int main (){

    double temp;
    double converted_temp;

    printf("Input a temperature: \n");
    scanf("%lf",&temp);

    //temp fahrenheit to celsius
    converted_temp = ((temp-32)*5/9);
    printf("%.2f fahrenheit is %.2f celsius.\n", temp, converted_temp);

    converted_temp = (temp*(9/5))+32;
    printf("%.2f celsius is %.2f fahrenheit.\n", temp, converted_temp);


    return 0;
}