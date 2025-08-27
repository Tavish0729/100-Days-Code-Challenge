#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;


    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

   
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    
    printf("\nQuotient: %.2f\n", quotient);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;

}

