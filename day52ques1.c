#include <stdio.h>

int main() {
    int n, i, x, ceilIndex = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    if (ceilIndex == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}
