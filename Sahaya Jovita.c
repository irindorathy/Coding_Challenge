#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");

    // Input numbers
    for(i = 0; i < 10; i++) {   // ✅ Correct condition (i < 10)
        scanf("%d", &arr[i]);
    }

    // Sorting logic
    for(i = 0; i < 9; i++) {   // ✅ Corrected: changed from i < 10 to i < 9
        for(j = i + 1; j < 10; j++) {   // ✅ Correct: j starts from i+1
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");

    for(i = 0; i < 10; i++) {   // ✅ Correct condition
        printf("%d ", arr[i]);
    }

    return 0;
}
