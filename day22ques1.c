#include <stdio.h>

int main() {
    int n, temp, remainder, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        remainder = n % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (sum == temp)
        printf("The number is a Strong Number.\n");
    else
        printf("The number is not a Strong Number.\n");

    return 0;
}
