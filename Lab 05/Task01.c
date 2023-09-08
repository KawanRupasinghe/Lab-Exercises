#include <stdio.h>

int main(){

int idNumber, wageRate, noOfHours;
float wage, netWage,average, averageWage;
float totalPayroll = 0;
float taxRate = 3.625;
int counter = 1;

for (int i=1; i >= 0; i++){

    printf("EMPLOYEE %d\n", i);
    printf("\n");
    printf("Enter the Identification Number: ");
    scanf("%d", &idNumber);

    printf("Enter the hourly wage rate: ");
    scanf("%d", &wageRate);

    printf("Enter number of hours worked: ");
    scanf("%d", &noOfHours);

    if (noOfHours <= 40)
        wage = noOfHours * wageRate;
    else
        wage = (noOfHours * wageRate) + ((noOfHours - 40) * (wageRate / 2));

    netWage = wage - (wage * (taxRate / 100));

    printf("Identification Number: %d\n", idNumber);
    printf("Employee Net Wage: %.2f\n", netWage);
    printf("\n");

    totalPayroll = totalPayroll + wage;
    printf("Total Payroll: %.2f\n", totalPayroll);

    average = totalPayroll / counter;
    printf("Average Payroll: %.2f\n", average);
    printf("\n");

    counter +=1;
    }

return 0;
}
