#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long sum = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum: %ld\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
