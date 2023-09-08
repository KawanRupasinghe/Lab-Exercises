#include <stdio.h>
#include <math.h>

int main(){

double initialAmount, amountRemaining, halfLife;
printf ("Enter the initial amount of Co60 in grams: ");
scanf("%lf", &initialAmount);

halfLife = 5.272;

printf("\nYear\t Amount Remaining\n");

for (int i = 0; i <= 5; i++){

    amountRemaining = initialAmount * exp(-0.693 * i / halfLife);

    printf("%d\t %f grams\n", i, amountRemaining);
    }
return 0;
}
