#include <stdio.h>

int main(){

float n;
int type;

printf("Enter Richter Scale Value: ");
scanf("%f", &n);

if (n > 0 && n < 5.0)
        type = 1;
else if (n >= 5.0 && n < 5.5)
        type = 2;
else if (n >= 5.5 && n < 6.5)
        type = 3;
else if (n >= 6.5 && n < 7.5)
        type = 4;
else if (n > 7.5)
        type = 5;
else
        type = 6;

switch(type){

case 1:
        printf("Little or no damage");
        break;
case 2:
        printf("Some damage");
        break;
case 3:
        printf("Serious damage: walls may crack or fall");
        break;
case 4:
        printf("Disaster: houses and buildings may collapse");
        break;
case 5:
        printf("Catastrophe: most buildings destroyed");
        break;
default:
        printf("Incorrect value");
}
return 0;
}
