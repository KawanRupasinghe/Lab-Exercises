#include<stdio.h>

int main() {

        float launchSpeed, launchDistance, time, acc;
        float metersPerSecond = 3.6;

        printf("Enter the takeoff speed in kilometres per hour: ");
        scanf("%f", &launchSpeed);

        printf("Enter the accelerator distance in metres: ");
        scanf("%f", &launchDistance);

        //calculating acceleration using a=v/t

        acc = (launchSpeed/metersPerSecond) * time;

        //calculating time using s=1/2vt

        time = 2 * (launchDistance / (launchSpeed/metersPerSecond));

        printf("The time is %.2f  seconds.\n", time);
        printf("The acceleration is %.2f metres per second.\n", acc);

return 0;
}
