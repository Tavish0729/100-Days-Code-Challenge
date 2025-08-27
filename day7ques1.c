#include <stdio.h>

int main() {
    int year;

 
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);

    return 0;
}


