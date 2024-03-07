#include <stdio.h>
//5.24 (Temperature Conversions) Implement the following integer functions:
//a. Function toCelsius returns the Celsius equivalent of a Fahrenheit temperature.
//b. Function toFahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
//c. Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format that minimizes the number of lines of outout while remaining readable.

int toCelsius(int f);
int main (){
    int celc = toCelsius(32);

    printf("celsius = %d\n", celc);
    return 0;
}

int toCelsius (int f) {

    double five = 5;
    double y = ((f-32)*(five/9));
    int result = y;
    return result;
}

void display () {

    printf("Fahrenheit\tCelsius");
    for (int f = 32; f <= 212; f++) {
        int c = toCelsius(f);
        printf("%9d\t%15d\n",f, c);
    }
}
