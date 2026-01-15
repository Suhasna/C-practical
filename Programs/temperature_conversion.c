#include <stdio.h>

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = (temp * 9 / 5) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, convertedTemp);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
