#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    
    return (n% 10) + sumOfDigits(n/ 10);
}

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);
    result = sumOfDigits(number);

    printf("The sum of the digits is: %d\n", result);

    return 0;
}
