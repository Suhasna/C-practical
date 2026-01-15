#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i, failed = 0;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 50) {
            failed = 1;
        }
        total += marks[i];
    }

    if (failed) {
        printf("Result: Failed\n");
    } else {
        percentage = (total / 500) * 100;
        printf("Total Marks: %.2f\n", total);
        printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 80) {
            printf("Division: Distinction\n");
        } else if (percentage >= 70) {
            printf("Division: First Division\n");
        } else if (percentage >= 60) {
            printf("Division: Second Division\n");
        } else if (percentage >= 50) {
            printf("Division: Third Division\n");
        } else {
            printf("Division: Fail (Percentage too low though subjects passed?)\n"); 
        }
    }

    return 0;
}
