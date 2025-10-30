#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)result == original)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
