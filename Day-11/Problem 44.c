#include <stdio.h>

int Factorial(int n);
 {
    int fact = 1;
    
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    
    return fact;
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
        int  result = Factorial(number);
        printf("Factorial of %d = %d\n", number, result);
    
    return 0;
}

