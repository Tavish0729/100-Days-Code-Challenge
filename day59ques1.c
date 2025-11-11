#include <stdio.h>

int main() {
    int n, k, i, j, maxSum = 0, currentSum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    for (i = 0; i < k; i++)
        currentSum += arr[i];
    maxSum = currentSum;

    for (i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}
