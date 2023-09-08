#include <stdio.h>

#define GRAV_CONST 9.80
#define EFFICIENCY 0.90
#define MEGA 1000000

int main() {

        double height, flowRate, mass, work, power;

        printf("Enter the height of the dam in metres: ");
        scanf("%lf", &height);

        printf("Enter the flow rate of water in cubic metres per second: ");
        scanf("%lf", &flowRate);

        mass =  flowRate * 1000;

        work = mass * GRAV_CONST * height;

        power = (work * EFFICIENCY) / MEGA;

        printf("The power generated by the dam is %.2lf megawatts\n", power);

return 0;
}
