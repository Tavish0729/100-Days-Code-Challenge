#include <stdio.h>

int main() {
    float percentage;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 0)
        printf("Grade F\n");
    else
        printf("Invalid input.\n");

    return 0;
}
