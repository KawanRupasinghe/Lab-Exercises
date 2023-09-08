#include <stdio.h>

int main(){

int num;
long factorial = 1;

printf("Enter a positive integer: ");
scanf("%d", &num);

for (int i=2; i<=num; i++){
    factorial = factorial * i;
    }

printf("Factorial: %ld\n", factorial);

return 0;
}
