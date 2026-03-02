#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void threeSum(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmp);

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == 0) {
                printf("[%d,%d,%d]\n", arr[i], arr[l], arr[r]);
                l++; r--;
            } else if (sum < 0)
                l++;
            else
                r--;
        }
    }
}

int main() {
    int arr[] = {-1, 0, 1, 2, -1, -4};
    threeSum(arr, 6);
    return 0;
}
