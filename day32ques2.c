#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0}, max = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, max);

    return 0;
}
