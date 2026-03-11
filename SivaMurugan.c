#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");

    // Correct input loop
    for(i = 0; i < 10; i++) {     // ✔ fixed condition
        scanf("%d", &arr[i]);
    }

    // Correct Bubble Sort
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {   // ✔ correct bubble sort logic
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
