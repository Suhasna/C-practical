#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
