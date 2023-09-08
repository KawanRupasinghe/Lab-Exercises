#include <stdio.h>

int main(){

char class;

printf("Enter the serial number of the ship: ");
scanf("%c", &class);

printf("Ship Class: %c\n", class);

switch(class){

case 'B':
case 'b':
        printf("Class B: Battleship");
        break;

case 'C':
case 'c':
        printf("Class C: Cruiser");
        break;

case 'D':
case 'd':
        printf("Class D: Destroyer");
        break;

case 'F':
case 'f':
        printf("Class F: Frigate");
        break;

default:
        printf("Invalid serial number");
}

return 0;
}
