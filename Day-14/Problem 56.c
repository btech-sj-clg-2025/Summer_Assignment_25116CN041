#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int foundDuplicate = 0;
    
    
    int visited[n]; 
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\nDuplicate elements in the given array: \n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }

        if (count > 1) {
            printf("Element %d appears %d times.\n", arr[i], count);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("No duplicate elements found in the array.\n");
    }
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

    findDuplicates(arr, n);

    return 0;
}
