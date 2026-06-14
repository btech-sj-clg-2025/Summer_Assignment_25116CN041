#include <stdio.h>
#include <limits.h> 

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return INT_MIN; 
    }

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax; 
            firstMax = arr[i];    
        }
        else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];   // Update second largest
        }
    }

    return secondMax;
}

int main() {
    int n;

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

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest == INT_MIN) {
        printf("\nThere is no second largest element in the array.\n");
    } else {
        printf("\nThe second largest element is: %d\n", secondLargest);
    }

    return 0;
}
