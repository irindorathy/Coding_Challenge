#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        // Corrected format string for scanf
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    // Outer loop runs N-1 times
    for (i = 0; i < 9; i++) { 
        // Inner loop compares adjacent elements
        for (j = 0; j < 9 - i; j++) { 
            // If the element on the left is greater than the element on the right
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
