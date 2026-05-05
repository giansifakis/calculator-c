#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Menu
        printf("0. Exit\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Press the number of the desired operation: ");
        scanf("%d", &choice);

        // Switch
        switch (choice) {
            case 0:
                printf("Exiting the program.\n");
                break;

            case 1:
                // Addition
                printf("Give me the first number: ");
                scanf("%f", &num1);
                printf("Give me the second number: ");
                scanf("%f", &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                // Subtraction
                printf("Give me the first number: ");
                scanf("%f", &num1);
                printf("Give me the second number: ");
                scanf("%f", &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

            case 3:
                // Multiplication
                printf("Give me the first number: ");
                scanf("%f", &num1);
                printf("Give me the second number: ");
                scanf("%f", &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

            case 4:
                // Division
                printf("Give me the first number (dividend): ");
                scanf("%f", &num1);
                printf("Give me the second number (divisor): ");
                scanf("%f", &num2);

                if (num2 == 0) {
                    printf("Error: you cannot divide by zero (0).\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;

            default:
                printf("The number you chose does not meet any of the available choices.\n");
        }
    } while (choice != 0);

    return 0;
}
