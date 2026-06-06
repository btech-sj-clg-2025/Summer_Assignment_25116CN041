#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    
    int lastDigit = n % 10;
    
    return reverseNumber(n/ 10, rev * 10 + lastDigit);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = reverseNumber(number, 0);

    printf("Reversed number: %d\n", result);

    return 0;
}
