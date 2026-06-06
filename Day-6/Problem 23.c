#include <stdio.h>

int main() {
    double base;
    int exponent;
    double result = 1.0;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int positive_exponent = exponent;
    if (exponent < 0) {
        positive_exponent = -exponent;
    }

    for (int i = 0; i < positive_exponent; i++) {
        result = result * base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    // 5. Output the result
    printf("Result: %.6f\n", result);

    return 0;
}
