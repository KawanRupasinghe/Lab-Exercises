#include<stdio.h>

int main() {

        float population, noOfToilets, oldLitresPerDay, newLitresPerDay, litresSaved, installationCost, pricePerLitre, costSaved;

        printf("Enter the population: ");
        scanf("%f", &population);

        printf("Enter price of a water litre in Rs: ");
        scanf("%f", &pricePerLitre);

        noOfToilets = population / 3;
        installationCost = noOfToilets * 150;

        oldLitresPerDay = 15 * 14 * noOfToilets;
        newLitresPerDay = 2 * 14 * noOfToilets;

        printf(“Total installation cost : $%.2f\n”, installationCost);

        litresSaved = oldLitresPerDay - newLitresPerDay;
        printf("Litres saved per day: %.2f litres\n", litresSaved);

        costSaved = (oldLitresPerDay * pricePerLitre) - (newLitresPerDay - pricePerLitre);
        printf("Cost saved per day: $.2f\n", costSaved);

return 0;
}
