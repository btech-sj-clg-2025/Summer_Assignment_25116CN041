#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array overflow. Cannot insert.\n");
        return size;
    }
    if (position < 1 || position > size + 1) {
        printf("Invalid position.\n");
        return size;
    }
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    printf("Element inserted successfully.\n");
    return size + 1;
}

int deleteElement(int arr[], int size, int position) {
    if (size == 0) {
        printf("Array underflow. Nothing to delete.\n");
        return size;
    }
    if (position < 1 || position > size) {
        printf("Invalid position.\n");
        return size;
    }
    for (int i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Element deleted successfully.\n");
    return size - 1;
}

void searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element found at position %d (index %d).\n", i + 1, i);
            return;
        }
    }
    printf("Element not found in the array.\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Initialize/Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &size);
                if (size < 0 || size > MAX_SIZE) {
                    printf("Invalid size. Resetting to 0.\n");
                    size = 0;
                } else {
                    printf("Enter %d elements:\n", size);
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                }
                break;

            case 2:
                display(arr, size);
                break;

            case 3:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", size + 1);
                scanf("%d", &position);
                size = insertElement(arr, size, element, position);
                break;

            case 4:
                printf("Enter position to delete (1 to %d): ", size);
                scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &element);
                searchElement(arr, size, element);
                break;

            case 6:
                printf("Exiting system.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
