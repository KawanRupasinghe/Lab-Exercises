#include <stdio.h>

// Function prototypes
int calculateFactorial(int n);
int calculateCombination(int n, int r);
int calculatePermutation(int n, int r);

int main() {
    int choice;
    while (1) {
        printf("\n\nMenu:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Calculate Combination (nCr)\n");
        printf("3. Calculate Permutation (nPr)\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n;
                while(1) {
                    printf("Enter a non-negative integer: ");
                    scanf("%d", &n);
                
                    // Check if the input is negative
                    if (n >= 0) {
                        printf("Factorial of %d is %d\n", n, calculateFactorial(n));
                        break;
                    } 
                    else {
                        printf("Factorial of %d is undefined\n", n);
                    }
                }
                break;
            }
            case 2: {
                int n, r;
                while (1) {
                    printf("Enter values for n and r ( n >= r >= 0)\n");
                    printf("n : ");
                    scanf("%d", &n);
                    printf("r : ");
                    scanf("%d", &r);
                    if (n >= r && r >= 0) {
                        printf("nCr is %d\n", calculateCombination(n, r));
                        break;
                    } 
                    else {
                        printf("Invalid input. Please try again.\n");
                    }
                }
                break;
            }
            case 3: {
                int n, r;
                while (1) {
                    printf("Enter values for n and r ( n >= r >= 0)\n");
                    printf("n : ");
                    scanf("%d", &n);
                    printf("r : ");
                    scanf("%d", &r);
                    if (n >= r && r >= 0) {
                        printf("nPr is %d\n", calculatePermutation(n, r));
                        break;
                    } else {
                        printf("Invalid input. Please try again.\n");
                    }
                }
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }
    return 0;
}

// Function to calculate factorial
int calculateFactorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate combination (nCr)
int calculateCombination(int n, int r) {
    int numerator = calculateFactorial(n);
    int denominator = calculateFactorial(r) * calculateFactorial(n - r);
    return numerator / denominator;
}

// Function to calculate permutation (nPr)
int calculatePermutation(int n, int r) {
    int numerator = calculateFactorial(n);
    int denominator = calculateFactorial(n - r);
    return numerator / denominator;
}
