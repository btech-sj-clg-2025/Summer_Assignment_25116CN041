#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int intersection[100]; 
    int k = 0;            

    printf("Intersection: { ");
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                
                int isDuplicate = 0;
                for (int m = 0; m < k; m++) {
                    if (intersection[m] == arr1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                
                if (!isDuplicate) {
                    intersection[k] = arr1[i];
                    printf("%d ", intersection[k]);
                    k++;
                }
                
                break; 
            }
        }
    }
    
    if (k == 0) {
        printf("No common elements found. ");
    }
    
    printf("}\n");
}

int main() {
    int array1[] = {4, 9, 5, 4, 1};
    int array2[] = {9, 4, 9, 8, 4, 2};
    
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    printf("Array 1: ");
    for(int i = 0; i < size1; i++) printf("%d ", array1[i]);
    printf("\n");
    
    printf("Array 2: ");
    for(int i = 0; i < size2; i++) printf("%d ", array2[i]);
    printf("\n\n");
    
    findIntersection(array1, size1, array2, size2);

    return 0;
}
