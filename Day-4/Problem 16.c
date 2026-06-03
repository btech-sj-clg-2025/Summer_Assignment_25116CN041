#include <stdio.h>

int main() {
    int start, end, num, temp, remainder, sum, digits;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers: ");

    for (int i = start; i <= end; i++) {
        num = i;
                if (num <= 0) {
            if (num == 0) printf("0 ");
            continue;
        }
        temp = num;
        digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        sum = 0;
        while (temp > 0) {
            remainder = temp % 10;
            int power = 1;
            for (int j = 0; j < digits; j++) {
                power *= remainder;
            }

            sum += power;
            temp /= 10;
        }
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
