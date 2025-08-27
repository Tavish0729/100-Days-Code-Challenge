#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);


    a = a + b;  
    b = a - b; 
    a = a - b;  

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

