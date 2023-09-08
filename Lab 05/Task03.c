#include <stdio.h>
#include <math.h>

int main(){

    float a = 3.592;
    float b = 0.0427;
    float R = 0.08206;
    double volume, moles, temp, initialVolume, finalVolume, volumeIncrement;

    printf("Enter number of moles: ");
    scanf("%lf", &moles);

    printf("Enter absolute temperature: ");
    scanf("%lf", &temp);

    printf("Enter initial volume in ml: ");
    scanf("%lf", &initialVolume);

    printf("Enter final volume in ml: ");
    scanf("%lf", &finalVolume);

    printf("Enter volume increment in ml: ");
    scanf("%lf", &volumeIncrement);

    //table title print
    printf("Volume(L)\t Pressure(atm)\n");

    //converting ml to L
    initialVolume /= 1000;
    finalVolume /= 1000;
    volumeIncrement /= 1000;

    //calculation
    for (double volume = initialVolume; volume <= finalVolume; volume += volumeIncrement) {
        double pressure = (moles * R * temp / (volume - moles * b)) - (moles * moles * a / (volume * volume));

    printf("%.3lf\t %.3lf\n", volume, pressure);
    }

return 0;
}
