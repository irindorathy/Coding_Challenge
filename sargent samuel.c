#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for(i = 0; i < 9; i++) {          // Outer loop goes to 9
        for(j = 0; j < 9 - i; j++) {  // Inner loop compares up to last unsorted element
            if(arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted numbers
    printf("Sorted numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
