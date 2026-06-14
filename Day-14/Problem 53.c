#include <stdio.h>


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, target, result;

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

    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Element %d found at index position: %d\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
