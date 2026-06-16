#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    
    int n = 6; 
    
    int missingNumber = findMissingNumber(arr, n);
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}