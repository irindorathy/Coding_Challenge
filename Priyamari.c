#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        if(scanf("%d", &arr[i]) != 1) {  // check valid input
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Bubble Sort
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9-i; j++) {     // standard Bubble Sort
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // add newline at the end

    return 0;
}
