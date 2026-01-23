#include <stdio.h>
int main() {
    int a[100], n, i, count = 1, current;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n <= 0) return 0;
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    current = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] == current) {
            count++;
        } else {
            printf("(%d,%d) ", current, count);
            current = a[i];
            count = 1;
        }
    }
    printf("(%d,%d)", current, count);
    return 0;
}