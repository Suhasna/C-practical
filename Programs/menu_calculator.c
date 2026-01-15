#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\nMENU\n");
        printf("---------------------------\n");
        printf("1. ADD\n");
        printf("2. SUBTRACT\n");
        printf("3. MULTIPLY\n");
        printf("4. DIVIDE\n");
        printf("5. EXIT\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Sum: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Difference: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Product: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Quotient: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
