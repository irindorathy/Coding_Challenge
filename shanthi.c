#include <stdio.h>

int main() {
    int num1, num2;

    // Ask the user for input
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input!\n");
        return 1; // Exit with error
    }

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input!\n");
        return 1; // Exit with error
    }

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);

    return 0;
}
