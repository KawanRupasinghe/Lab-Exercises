#include<stdio.h>

int main(){

        float volume, time, rate;
        float constant = 60;

        printf("Enter the volume to be infused in ml: ");
        scanf("%f", &volume);

        printf("Enter the time in min: ");
        scanf("%f", &time);

        rate = (volume) / (time/constant);

        printf("VTBI : %.2f millilitres\nRate : %.2f millilitres per hour", volume,rate);

return 0;
}
