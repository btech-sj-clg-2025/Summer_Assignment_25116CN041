#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent: ");

    int started = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;

        if (bit == 1) {
            started = 1; 
        }

        if (started) {
            printf("%d", bit);
        }
    }

    if (!started) {
        printf("0");
    }
    printf("\n");

    return 0;
}
