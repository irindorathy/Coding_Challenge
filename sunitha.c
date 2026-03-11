
#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) {
    int arr[N];
    int i, j, temp;

    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Optimized Bubble Sort (early exit if already sorted)
    for (i = 0; i < N - 1; i++) {
        bool swapped = false;
        for (j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break; // array already sorted
    }

    printf("Sorted numbers:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
