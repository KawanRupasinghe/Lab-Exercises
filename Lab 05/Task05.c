#include <stdio.h>
#include <math.h>

int main(){

double width = 15.0;
double slope = 0.0015;
double roughness = 0.014;
double cubicFeetPerSecond = 1000;;
double depthGuess, flow, error;

printf("Enter depth guess in feet: ");
scanf("%lf", &depthGuess);

while (1){

    double area = depthGuess * width;
    double perimeter = width + (2 * depthGuess);
    double hydraulicRadius = area / perimeter;
    flow = 1.0 / roughness * area * pow(hydraulicRadius, 2 / 3) * sqrt(slope);

    printf("Depth: %lf feet\nFlow: %lf cubic feet per second\n", depthGuess, flow);

    error = (flow - cubicFeetPerSecond) / cubicFeetPerSecond / 100;
    if (error <= 0.1)
        printf("The calculated value is within the range of 0.1\n");
        break;

    if (flow < cubicFeetPerSecond)
        printf("Enter a higher depth");
    else
        printf("Enter a lower depth");

    scanf("%lf", &depthGuess);
    }

return 0;
}
