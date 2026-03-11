#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {   // ✅ correct loop
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for(i = 0; i < 10 - 1; i++) {       // ✅ only till 9 passes
        for(j = i + 1; j < 10; j++) {   // ✅ j starts from i+1
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
