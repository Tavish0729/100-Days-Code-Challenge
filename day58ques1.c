#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        int product = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }
        answer[i] = product;
    }

    printf("Product array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
