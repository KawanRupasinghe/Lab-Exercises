#include <stdio.h>

int main(){

int weekday, night, weekend;
float totalBill, preTaxBill, averageCost, taxes;
float flatRate = 39.99;
float taxRate = 5.25;
float addCost = 0.40;

printf("Enter weekday minutes: ");
scanf("%d", &weekday);
printf("Enter night minutes: ");
scanf("%d", &night);
printf("Enter weekend minutes: ");
scanf("%d", &weekend);

//Usage Display

printf("\n");
printf("MONTHLY USAGE\n");
printf("Weekday Minutes: %d \n", weekday);
printf("Night Minutes: %d \n", night);
printf("Weekend Minutes: %d \n", weekend);
printf("\n");

//Bill Calculation

if (weekday <= 600)
    preTaxBill = 39.99 * weekday;
else
    preTaxBill = (39.99 * 600) + ((weekday - 600) * addCost);

averageCost = preTaxBill / weekday;
taxes = preTaxBill * (5.25 / 100);
totalBill = preTaxBill + taxes;

//Bill Display

printf("MONTHLY BILL\n");
printf("Pre-Tax Bill: %.2f \n", preTaxBill);
printf("Average Minute Cost: %.2f \n", averageCost);
printf("Taxes: %.2f \n", taxes);
printf("Total Bill: %.2f", totalBill);

return 0;
}
