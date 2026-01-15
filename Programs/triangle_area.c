#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2.0;

    if (a + b > c && a + c > b && b + c > a) {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Semi-perimeter = %.2f\n", s);
        printf("Area of the triangle = %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
