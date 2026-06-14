#include <stdio.h>

int main() {
    int n;

    // Step 1: Get the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate that the array size is positive
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    // Declare the array with the user-defined size
    int arr[n];

    // Step 2: Take array inputs from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Step 3: Display the array elements
    printf("\nThe elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
