#include <stdio.h> 

int main() {
    float principal, rate, time, SI, CI;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;

    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}


