#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d = %d\n", a, b, hcf);

    return 0;
}
