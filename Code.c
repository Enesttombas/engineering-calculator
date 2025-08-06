#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factorial(int n) {
    if(n < 0) return -1;
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice;
    double num1, num2, result;
    int tempInt;

    printf("Engineering Calculator\n");
    printf("========================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square root\n");
    printf("7. Sine (sin)\n");
    printf("8. Cosine (cos)\n");
    printf("9. Tangent (tan)\n");
    printf("10. Logarithm (ln)\n");
    printf("11. Logarithm (log10)\n");
    printf("12. Factorial\n");
    printf("13. Absolute value\n");
    printf("14. Modulus\n");
    printf("Enter your choice (1-14): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Addition
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("Result: %g\n", result);
            break;
        case 2: // Subtraction
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Result: %g\n", result);
            break;
        case 3: // Multiplication
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("Result: %g\n", result);
            break;
        case 4: // Division
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            if(num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                result = num1 / num2;
                printf("Result: %g\n", result);
            }
            break;
        case 5: // Power
            printf("Enter the base number: ");
            scanf("%lf", &num1);
            printf("Enter the exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("Result: %g\n", result);
            break;
        case 6: // Square root
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 < 0) {
                printf("Error: Cannot calculate the square root of a negative number!\n");
            } else {
                result = sqrt(num1);
                printf("Result: %g\n", result);
            }
            break;
        case 7: // Sine
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180.0);
            printf("Result (sin): %g\n", result);
            break;
        case 8: // Cosine
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180.0);
            printf("Result (cos): %g\n", result);
            break;
        case 9: // Tangent
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180.0);
            printf("Result (tan): %g\n", result);
            break;
        case 10: // Natural logarithm
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 <= 0) {
                printf("Error: Logarithm for zero or negative numbers is undefined!\n");
            } else {
                result = log(num1);
                printf("Result (ln): %g\n", result);
            }
            break;
        case 11: // Log base 10
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 <= 0) {
                printf("Error: Logarithm for zero or negative numbers is undefined!\n");
            } else {
                result = log10(num1);
                printf("Result (log10): %g\n", result);
            }
            break;
        case 12: // Factorial
            printf("Enter an integer: ");
            scanf("%d", &tempInt);
            if(tempInt < 0) {
                printf("Error: Factorial of a negative number cannot be calculated!\n");
            } else {
                printf("Result: %lld\n", factorial(tempInt));
            }
            break;
        case 13: // Absolute value
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Result: %g\n", result);
            break;
        case 14: // Modulus
            printf("Enter the first integer: ");
            scanf("%d", &tempInt);
            printf("Enter the second integer: ");
            int tempInt2;
            scanf("%d", &tempInt2);
            if(tempInt2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("Result: %d\n", tempInt % tempInt2);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}
