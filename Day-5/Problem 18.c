#include <stdio.h>

int Factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact =fact* i;
    }
    return fact;
}

int main() {
    int num, originalNum, lastDigit;
    int sum = 0;
    printf("Enter an integer to check: ");
    scanf("%d", &num);
    originalNum = num;

    while (num > 0) {
        lastDigit = num % 10;           
        sum =sum+Factorial(lastDigit); 
        num=num/10;                     
    }
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
