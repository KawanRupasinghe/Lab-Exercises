#include <stdio.h>

int main(){

int age;
char sts;

printf("Enter the age: ");
scanf("%d", &age);

if (age > 59){

        printf("Enter status 'W' if working or any other key if not working: ");
        scanf("%c\n", &sts);

        if (sts == 'W')
                printf("Working Senior");
        else
                printf("Retired Senior");
}

else if (age > 20)
        printf("Adult");

else if (age > 12)
        printf("Teen");

else
        printf("Child");

return 0;
}
