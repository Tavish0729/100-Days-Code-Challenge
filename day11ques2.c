#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) {
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit = %.2f%%\n", percentage);
    } else if (profitLoss < 0) {
        percentage = (-profitLoss / costPrice) * 100;
        printf("Loss = %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
