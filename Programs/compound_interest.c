#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, ci;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
