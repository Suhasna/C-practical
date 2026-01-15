#include <stdio.h>

int main() {
    float basic_salary, gross_salary, hra, da;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    hra = 0.20 * basic_salary;
    da = 0.50 * basic_salary;
    gross_salary = basic_salary + hra + da;

    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
