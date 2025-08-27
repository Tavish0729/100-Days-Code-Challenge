#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using addition and subtraction)
    a = a + b;  // sum stored in a
    b = a - b;  // original a stored in b
    a = a - b;  // original b stored in a

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
