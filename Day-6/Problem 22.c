#include <stdio.h>

int count(unsigned int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;         
    }
    return count;
}

int main() {
     int num;
    
    printf("Enter an integer: ");
    scanf("%u", &num);
    
    printf("Number of set bits is: %d\n", num, count(num));
    return 0;
}
