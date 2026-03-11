#include <stdio.h>

int main()
{
    int arr[10], i, j, temp;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted numbers are:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
