#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time, SI, CI;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    SI = (principal * rate * time) / 100;

    // Calculate Compound Interest
    CI = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
