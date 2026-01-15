#include <stdio.h>

int main() {
    int days, years, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;
    months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf("%d days = %d years, %d months, %d days\n", days, years, months, remaining_days);

    return 0;
}
