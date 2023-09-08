#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, angle;
    const double pi = 3.1415;

    // Input side lengths and angle in degrees
    printf("Enter the lengths of side b and c in same units.\n");
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Convert angle to radians
    double angleRadians = (angle * pi) / 180.0;

    // Calculate the length of side a using the formula
    a = sqrt(pow(b, 2) + pow(c, 2) - 2 * b * c * cos(angleRadians));

    // Display the result
    printf("\nThe length of the third side (a) is %.2lf units.\n", a);

    return 0;
}
