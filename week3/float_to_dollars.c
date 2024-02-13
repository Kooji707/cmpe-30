#include <stdio.h>
#include <math.h>

int main (){
    double number_a, money_dollars, money_cents;
    printf("Enter your value with decimals: \n");
    scanf("%lf",&number_a);
    money_cents = modf(number_a, &money_dollars);
    printf("%.0f dollars", money_dollars);
    money_cents = money_cents * 100;
    printf(" and %.0f cents.\n", money_cents);

    return 0;
}