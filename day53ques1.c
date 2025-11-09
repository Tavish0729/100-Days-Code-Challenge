#include <stdio.h>

int main() {
    int n, i, totalSum = 0, leftSum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
