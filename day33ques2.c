#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter number of elements (sorted in ascending order): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = n;
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
