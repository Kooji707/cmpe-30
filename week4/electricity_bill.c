#include <stdio.h>
#include <math.h>

int main (){
    int units = 0;
    int bill;
    printf("Enter the number of units you have: \n");
    scanf("%d",&units);

    if (units <= 100)
    {
        double bill_a = units * 0.5;
        printf("Your bill is $%.2f \n", bill_a);
    }
    else if (units <= 200)
    {
        double bill_a = 100 * 0.5;
        double bill_b = (units - 100) * 0.75;
        double bill_total = (bill_a + bill_b);
        printf("Your bill is $%.2f \n", bill_total);
    }
    else if (units <= 300)
    {
        double bill_a = 100 * 0.5;
        double bill_b = 100 * 0.75;
        double bill_c = (units - 100) * 1.20;
        double bill_total = (bill_a + bill_b + bill_c);
        printf("Your bill is $%.2f \n", bill_total);
    }
    else 
    {
        double bill_a = 100 * 0.5;
        double bill_b = 100 * 0.75;
        double bill_c = 100 * 1.20;
        double bill_d = (units - 300) * 1.50;
        double bill_total = (bill_a + bill_b + bill_c + bill_d);
        printf("Your bill is $%.2f \n", bill_total);
    }
    return 0;
}