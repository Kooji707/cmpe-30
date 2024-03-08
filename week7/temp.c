#include <stdio.h>
//5.24 (Temperature Conversions) Implement the following integer functions:
//a. Function toCelsius returns the Celsius equivalent of a Fahrenheit temperature.
//b. Function toFahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
//c. Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format that minimizes the number of lines of outout while remaining readable.

int toFahrenheit (int c) {

    double nine = 9;
    double x = ((c*(nine/5))+32);
    int result_f = x;
    return result_f;

}

int toCelsius (int f) {

    double five = 5;
    double y = ((f-32)*(five/9));
    int result_c = y;
    return result_c;

}

void display () {

    printf("Celsius\tFahrenheit\n");
    for (int c = 0; c <= 100; c++) {
        int f = toFahrenheit(c);
        printf("%d\t%d\n",c,f);
    }
}

int main (){
    display();
    return 0;
}


