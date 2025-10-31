#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
