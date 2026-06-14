#include <stdio.h>

int getElementFrequency(int arr[], int n, int target) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++; 
    }
    
    return count;
}

int main() {
    int n, target, frequency;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to find its frequency: ");
    scanf("%d", &target);

    frequency = getElementFrequency(arr, n, target);

    printf("The element %d appears %d time(s) in the array.\n", target, frequency);

    return 0;
}
