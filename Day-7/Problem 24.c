#include <stdio.h>

int factorial(int n) {
    if (n ==1) {
        return 1;
    }  else {
        return n*factorial(n-1);
    }
}

int main() {
    int n, i;

    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Factorial is: ");
    printf("%d, ", factorial(i));

    return 0;
}
