#include <stdio.h>

void compressArray(const int arr[], int n)
{
    if (n <= 0)
        return;

    int current = arr[0];
    int count = 1;

    printf("Compressed Output:\n");

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == current)
        {
            count++;
        }
        else
        {
            // Print previous value and its count
            printf("(%d,%d) ", current, count);

            // Reset for new value
            current = arr[i];
            count = 1;
        }
    }

    // Print the last group
    printf("(%d,%d)\n", current, count);
}

int main(void)
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    compressArray(arr, n);

    return 0;
}
