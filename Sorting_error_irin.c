
#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {   // ❌ ERROR: should be i < 10
        scanf("%d", &arr[i]);
    }

    // Bubble sort (with mistakes)
    for(i = 0; i < 10; i++) {
        for(j = i+1; j < 10; j++) {   // ❌ ERROR: should be j = i+1
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
